#include<stdio.h>
#include<stdlib.h>

int findFactorial(short int number)
{
    if (number == 0 || number == 1)
        return 1;
    int factNumber = 1;
    for (int i = 2; i <= number; i++)
        factNumber = factNumber * i;
    return factNumber;
}

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int factorialNum = findFactorial(inputNumber);
    printf("Factorial of %d is %lld", inputNumber, factorialNum);
}

#include <stdio.h>
#include <stdlib.h>

int findFactorial(int num)
{
    if (num == 1 || num == 0)
        return 1;
    return num * findFactorial(num - 1);
}

int main(int argCount, char *args[])
{
    int inputNumber = atoi(args[1]);
    int factNumber = findFactorial(inputNumber);
    printf("Factorial of %d is %d", inputNumber, factNumber);
}