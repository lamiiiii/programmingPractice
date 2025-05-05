function solution(record) {
    const userMap = new Map();
    const logs = [];
    
    for(const rec of record){
        const [ command, uid, nickname] = rec.split(' ');
        
        if(command === 'Enter' || command === 'Change'){
        userMap.set(uid, nickname);
        }
    }
    
    for(const rec of record){
        const [command, uid] = rec.split(' ');
        
        if(command === 'Enter'){
            logs.push({uid, action: '들어왔습니다.'});
        } else if(command === 'Leave'){
            logs.push({uid, action: '나갔습니다.'});
        }
    }
    
    return logs.map(({uid, action}) => {
        const nickname = userMap.get(uid);
        return `${nickname}님이 ${action}`;
    });
}