function solution(s) {
    const string = s.split(' ');
    const numbers = string.map(Number);
    
    const min = Math.min(...numbers);
    const max = Math.max(...numbers);
    
    return `${min} ${max}`;
}