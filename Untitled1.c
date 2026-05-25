#include <stdio.h>

int main()
{
    float var1, var2;
    char op;

    printf("Simple Calculator\n");
    printf("Enter the varriable 1: ");
    scanf("%f",&var1);
    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter the varriable 2: ");
    scanf("%f",&var2);

    if (op=='+'){
        printf("Result: %.2f\n",var1+var2);
    }
    else if (op=='-'){
        printf("Result: %.2f\n",var1-var2);
    }
    else if (op=='*'){
        printf("Result: %.2f\n",var1*var2);
    }
    else if (op=='/'){
         if (var2 != 0)
            printf("Result: %.2f",var1/var2);
        else
            printf("Error! Division by zero is not allowed.");
    }
    else {
        printf("Invalid operator!");
    }

    return 0;
}
