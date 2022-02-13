// set C -> Q-2
#include <stdio.h>

void add(double a, double b){
    printf("\n addition of %lf and %lf is: %lf", a, b, a+b);
}

void sub(double a, double b){
    printf("\n subtraction of %lf and %lf is: %lf", a, b, a-b);
}

void mul(double a, double b){
    printf("\n multiplication of %lf and %lf is: %lf", a, b, a*b);
}

void divi(double a, double b){
    printf("\n division of %lf and %lf is: %lf", a, b, a/b);
}

void (*func_ptr[4])() = {add, sub, mul, divi};

int main() {
    double num1, num2;
    int op;
    printf("\nenter the first number: ");
    scanf("%lf", &num1);
    printf("\nenter the second number: ");
    scanf("%lf", &num2);
    printf("\nenter 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division: ");
    scanf("%d", &op);
    
    if(op>=1 && op<=4){
        (*func_ptr[op-1])(num1, num2);
    } else{
        printf("\nenter a valid operator");
    }
    
    return 0;
}