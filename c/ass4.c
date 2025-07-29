#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0; // Count of non-zero elements

    // Traverse the array. If element is non-zero, move it to the front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining positions with 0
    while(count < n) {
        arr[count++] = 0;
    }

    printf("Array after moving all zeros to end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
