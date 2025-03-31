int fibonacciSeries(int n){
    if(n<=1){
        return 1;
    }
    else{
        int res=fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    return res;
}