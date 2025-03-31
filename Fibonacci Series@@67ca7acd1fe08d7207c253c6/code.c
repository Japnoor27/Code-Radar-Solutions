int fibonacciSeries(int n){
    int res;
    if(n<=1){
        return 1;
    }
    else{
        res=fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    return res;
}