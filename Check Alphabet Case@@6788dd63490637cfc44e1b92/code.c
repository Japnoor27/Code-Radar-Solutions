#include <stdio.h>
int main() {
    char b;
scanf("%c",&b);
if(b>='A' && b<='Z'){
    printf("Uppercase");
}
else if(b>='a' && b<='z'){
    printf("Lowercase");
}
else{
    printf("Not an alphabet");
}
    return 0;
}