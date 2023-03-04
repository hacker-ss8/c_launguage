#include<stdio.h>
int main(){
    char d;
    printf("Enter your operator (+,-,*,/)");
    scanf("%c",&d);

    int a,b;
    printf("Enter your first value = ");
    scanf("%d", &a);
    printf("Enter your second value = ");
    scanf("%d", &b);

    switch(d){
        case '+':
        printf("\n ==> The sum is ( %d )\n\n", a+b);
        break;

        case '-':
        printf("\n ==> The sum is ( %d )\n\n", a-b);
        break;

        case '*':
        printf("\n ==> The multi. is ( %d )\n\n", a*b);
        break;

        case '/':
        printf("\n ==> The div is ( %d )\n\n", a/b);
        break;

        default:
        printf("\n ==> Invalid Input \n\n");
        break;
    } 
    return 0;
}
