#include <stdio.h>
#include <stdlib.h>

int main()
{

    double number1, number2;
    char operation;

    printf("Enter Number: ");
    scanf("%lf", &number1);
    printf("Enter Operation: ");
    scanf(" %c", &operation);
    printf("Enter Number: ");
    scanf("%lf", &number2);

    if (operation == '+') {
        printf("%f", number1 + number2);
    } else if (operation == '-') {
        printf("%f",  number1 - number2);
    } else if (operation == '/') {
        printf("%f",number1 / number2);
    } else if (operation == '*') {
        printf("%f", number1 * number2);
    } else {
        printf("Invalid input");
    }



    return 0;
}
