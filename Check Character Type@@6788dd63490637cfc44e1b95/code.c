#include <stdio.h>
int main() {
int char ch;
scanf("%d",&ch);
if(ch>='0' && ch<= '9'){
    printf("Digit")}
    else if ((ch>='A'&& ch<='Z')|| (ch>='a' && ch<='z')){
        if (ch=='A' ||ch=='E'|| ch=='I' ||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            printf("Vowel")
        }
        else{
            printf("Consonant")
        }
    }
else{
    printf("Special Character")
}
else 
    return 0;
}