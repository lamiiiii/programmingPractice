function solution(n) {
    for(i=0; i<1000000; i++){
        if(n%i === 1) return i;
    }
}