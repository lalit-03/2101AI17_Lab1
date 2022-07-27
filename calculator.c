#include <stdio.h>

int main(){
    printf("This is a calculator.\n");
    int a, b, choice, ans;

    printf("Enter first number(a): ");
    scanf("%d", &a);
    printf("Enter second number(b): ");
    scanf("%d", &b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");
    scanf("%d", &choice);

    if(choice==1){
        printf("a + b = %d", a+b);
    }
    else if(choice==2){
        printf("a - b = %d", a-b);
    }
    
    return 0;
}