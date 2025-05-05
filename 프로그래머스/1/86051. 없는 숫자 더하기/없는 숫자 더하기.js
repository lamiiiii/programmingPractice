function solution(numbers) {
    const array = [false];
    let sum = 0;
    
    for(num of numbers){
        array[num] = true;
    }
    
    for(i=0; i<10; i++){
        if(!array[i]){
            sum += i;
        }
    }
    return sum;
}