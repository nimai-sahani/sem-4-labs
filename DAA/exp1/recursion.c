#include <stdio.h>

int binarySearch(int A[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;

    if (A[mid] == key) {
        return mid;
    }
    else if (A[mid] < key) {
        return binarySearch(A, mid + 1, high, key);
    }
    else {
        return binarySearch(A, low, mid - 1, key);
    }
}

int main() {
    int A[] = {1, 2, 5, 8, 9, 10};
    int n = 6;
    int key;

    printf("Enter the key value: ");
    scanf("%d", &key);

    int result = binarySearch(A, 0, n - 1, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
