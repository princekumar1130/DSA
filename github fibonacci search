#include <stdio.h>

// Utility function to find minimum of two numbers
int min(int x, int y) {
    return (x <= y) ? x : y;
}

// Fibonacci Search function
int fibonacciSearch(int arr[], int n, int x) {
    int fib2 = 0;   // (m-2)'th Fibonacci number
    int fib1 = 1;   // (m-1)'th Fibonacci number
    int fib = fib2 + fib1; // m'th Fibonacci number

    // fib is going to store the smallest Fibonacci number >= n
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    // Marks the eliminated range from front
    int offset = -1;

    // while there are elements to be inspected
    while (fib > 1) {
        // Check if fib2 is a valid location
        int i = min(offset + fib2, n - 1);

        // If x is greater, cut the subarray from offset to i
        if (arr[i] < x) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }

        // If x is smaller, cut the subarray after i+1
        else if (arr[i] > x) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }

        // element found
        else
            return i;
    }

    // comparing the last element with x
    if (fib1 && arr[offset + 1] == x)
        return offset + 1;

    // element not found
    return -1;
}

int main() {
    int n, x;

    printf("Enter number of elements (sorted array): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int index = fibonacciSearch(arr, n, x);

    if (index >= 0)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}
