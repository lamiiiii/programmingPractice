function solution(n, k) {
    var total = 12000*n + 2000*k;
    while(n >= 10){
        total -= 2000;
        n -= 10;
    }
    return total;
}