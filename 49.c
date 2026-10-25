#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array :"); scanf("%d",&n);
    int arr[n],i, j, minIndex, temp;

    printf("Enter the elements for array: ");
    for (i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("The array is : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}