#include <stdio.h>

int main(){
    printf("This is a calculator.\n");
    double a, b, ans;
    int choice;
    printf("Enter first number(a): ");
    scanf("%lf", &a);
    printf("Enter second number(b): ");
    scanf("%lf", &b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ");
    scanf("%d", &choice);

    if(choice==1){
        printf("a + b = %lf", a+b);
    }
    else if(choice==2){
        printf("a - b = %lf", a-b);
    }
    else if(choice==3){
        printf("a * b = %lf", a*b);
    }
    else if(choice==4){
        if(b==0){
            printf("Division by zero is not possible.");
        }
        else{
            printf("a / b = %lf", a/b);
        }
    }
    else{
        printf("Please enter a valid choice.");
    }

    return 0;
}