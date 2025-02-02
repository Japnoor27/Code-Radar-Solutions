#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   if(a>=1 && a%1==0 && a%a==0){
    printf("Prime");
   }
   else if(a==2 && a==3 && a==5 && a==7){
    printf("Prime");
   }
   else{
    printf("Not Prime");
   }
    return 0;
}