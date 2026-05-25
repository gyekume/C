#include <stdio.h>
int main(){
    int num1,num2;
    char operator;
    int result;

    printf("Enter first number : ");
    scanf("%d",&num1);

    printf("Enter second number : ");
    scanf("%d",&num2);

    printf("Enter operator (+, -, *, /) : ");
    scanf(" %c",&operator);

    switch (operator)
    {    case '+':
        result = num1 + num2;
        printf("Result : %d",result);
        break;          

        case '-':
        result = num1 - num2;
        printf("Result : %d",result);
        break;

        case '*':
        result = num1 * num2;
        printf("Result : %d",result);
        break;

        case '/':
        if (num2 != 0)

        {
            result = num1 / num2;
            printf("Result : %d",result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
        break;
       
        default:
        printf("Invalid operator");
        break;

        return 0;
}
}