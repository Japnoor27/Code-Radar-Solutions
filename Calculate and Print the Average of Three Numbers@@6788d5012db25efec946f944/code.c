#include <stdio.h>
int main() {
    int a,b,c,s,v;
    scanf("%d%d%d",&a,&b,&c);
    s=a+b+c;
    v=s/3;
    printf("Average: %.2f",v);
    return 0;
}