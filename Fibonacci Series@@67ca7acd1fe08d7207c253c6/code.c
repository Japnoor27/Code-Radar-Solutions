int fibonacciSeries(int n){
    int res;
    if(n<=1){
        return n;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    
}