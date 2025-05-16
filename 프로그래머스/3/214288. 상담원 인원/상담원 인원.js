function solution(k, n, reqs) {
    let minWaitTime = Infinity;
    
    const distributions = [];
  
    const generateDistributions = (depth, remaining, path) => {
        if(depth === k){
            if(remaining===0) distributions.push([...path]);
            return;
        }
        
        for (let i=1; i<=remaining - (k-depth-1); i++){
            path.push(i);
            generateDistributions(depth + 1, remaining - i, path);
            path.pop();
        }
    };
    
    generateDistributions(0, n, []);
    
    for(const dist of distributions){
        const waitTime = simulate(reqs, dist, k);
        minWaitTime = Math.min(minWaitTime, waitTime);
    }
    
    return minWaitTime;
}

function simulate(reqs, dist, k){
    const typeRequests = Array.from({length: k}, () => []);
    for(const [start, duration, kind] of reqs){
        typeRequests[kind - 1].push([start, duration]);
    }
    
    let totalWaitTime = 0;
    
    for (let i = 0; i<k; i++){
        const mentors = Array(dist[i]).fill(0);
        
        for(const [start, duration] of typeRequests[i]){
            let earliestIdx = 0;
            for (let j=1; j<mentors.length; j++){
                if(mentors[j]<mentors[earliestIdx]) earliestIdx = j;
            }
            
            const availableTime = mentors[earliestIdx];
            const wait = Math.max(0, availableTime - start);
            totalWaitTime += wait;
            
            mentors[earliestIdx] = start + wait + duration;
        }
    }
    
    return totalWaitTime;
}