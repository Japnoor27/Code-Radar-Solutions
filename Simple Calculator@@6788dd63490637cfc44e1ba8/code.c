#include <stdio.h>
int main() {
int a,b,c;
char ch;
scanf("%d%d",&a,&b);
scanf("%c",&ch);
if(ch=='+'){
    c=a+b;
    printf("%d",c);
}
else if(ch=='-'){
    c=a-b;
    printf("%d",c);
}
else if(ch=='*'){
    c=a*b;
    printf("%d",c);
}
else if (ch=='/'){
    if(b==0){
        printf("Error");
    }
    else{

    
    c=a/b;
    printf("%d",c);}
}
else{
    printf("Error");
}
    return 0;
}