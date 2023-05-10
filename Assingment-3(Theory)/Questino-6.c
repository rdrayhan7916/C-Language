// Pass by value and pass by reference are two ways of passing arguments to a function in C.

// Pass by value means that the function receives a copy of the argument, so any changes made to the argument inside the function do not affect the original value outside the function.

// Pass by reference means that the function receives the address of the argument, so any changes made to the argument inside the function are reflected in the original value outside the function.

// Here is an example of both methods:

#include <stdio.h>

// function to swap two numbers using pass by value
void pass_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside pass_by_value: a = %d, b = %d\n", a, b);
}

// function to swap two numbers using pass by reference
void pass_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside pass_by_reference: a = %d, b = %d\n", *a, *b);
}

int main()
{
    // declare two variables
    int x = 10, y = 20;

    // print the values of x and y before calling any function
    printf("Before calling any function: x = %d, y = %d\n", x, y);

    // call the swap_by_value function and pass x and y as arguments
    pass_by_value(x, y);

    // print the values of x and y after calling swap_by_value
    printf("After calling swap_by_value: x = %d, y = %d\n", x, y);

    // call the swap_by_reference function and pass the addresses of x and y as arguments
    pass_by_reference(&x, &y);

    // print the values of x and y after calling swap_by_reference
    printf("After calling swap_by_reference: x = %d, y = %d\n", x, y);

    return 0;
}







