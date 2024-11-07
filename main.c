#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b) {
    return a / b; 
}

void print_array(int *arr, int size) {
    for (int i = 0; i <= size; i++) { 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr;
    int n;
    int divisor = 0; 

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Initialize array
    }

    print_array(arr, n); 
    int result = divide(arr[0], divisor); 
    printf("Result of division: %d\n", result);

    free(arr);
    return 0;
}
