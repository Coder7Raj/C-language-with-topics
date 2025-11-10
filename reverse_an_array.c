#include <stdio.h> //including standard input output header file
int main()         // main function
{
    int n;           // initializing number of elements in the array or the size of the array
    scanf("%d", &n); // getting number of elements in the array or size of the array

    int arr[n];                 // declaring the array of size n
    for (int i = 0; i < n; i++) // loop to get the elements of the array
    {
        scanf("%d", &arr[i]); // getting the elements of the array
    }

    int i = 0;     // initializing the starting index
    int j = n - 1; // initializing the ending index

    while (i < j) // loop to reverse the array
    {
        int temp = arr[i]; // swapping the elements at index i and j
        arr[i] = arr[j];   // swapping the elements at index i and j
        arr[j] = temp;     // swapping the elements at index i and j

        i++; // incrementing the starting index
        j--; // decrementing the ending index
    }

    for (int i = 0; i < n; i++) // loop to print the reversed array
    {
        printf("%d ", arr[i]); // printing the elements of the reversed array
    }
}