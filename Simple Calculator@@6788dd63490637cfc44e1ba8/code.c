#include <stdio.h>
int main() {
int a,b,c;
char ch;
scanf("%d%d%c",&a,&b,&ch);
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
    c=a/b;
    printf("%d",c);
}
else{
    printf("Error");
}
    return 0;
}