#include <stdio.h>

void insertAtEnd(int arr[], int *n, int x) {
    arr[*n] = x;   
    (*n)++;       
}

int main() {
    int arr[100]; 
    int n, i, x;

    
    scanf("%d", &n);

    
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &x);


    insertAtEnd(arr, &n, x);


    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
