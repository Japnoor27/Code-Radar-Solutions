#include <stdio.h>
int main(){
    char op;
    int a,b,c;
     

    scanf("%d%d", &a, &b);
    scanf(" %c", &op); 
    switch(op){
        case '+':
        c=a+b;
        printf("%d",c);
        break;
        case '-':
         c=a-b;
        printf("%d",c);
        break;
          case '*':
         c=a*b;
        printf("%d",c);
        break;
        case '/':
        if (b != 0) {
                c = a / b;
                printf("%d", c);
        }else {
                printf("error");
            }
        break;
        default:
        printf("invalid");
        break;
        


    }
return 0;
}