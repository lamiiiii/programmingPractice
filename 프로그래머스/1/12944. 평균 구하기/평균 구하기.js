function solution(arr) {
    let sum = 0;
    
    for (num of arr){
        sum += num;
    }
    return sum/arr.length;
}