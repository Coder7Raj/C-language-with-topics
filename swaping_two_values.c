#include <stdio.h>
int main()
{
    int a, b, temp;                                    // Declare three integer variables
    printf("Enter two integers: ");                    // Prompt user for input
    scanf("%d %d", &a, &b);                            // Read two integers from user
    printf("Before swapping: a = %d, b = %d\n", a, b); // Display values before swapping

    // Swapping values using a temporary variable
    temp = a; // Store the value of 'a' in 'temp'
    a = b;    // Assign the value of 'b' to 'a'
    b = temp; // Assign the value stored in 'temp' to 'b'

    printf("After swapping: a = %d, b = %d\n", a, b); // Display values after swapping
    return 0;
}