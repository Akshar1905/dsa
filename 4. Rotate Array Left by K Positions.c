///4. Rotate Array Left by K Positions

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n;  // to handle large k

    int temp[k];
    for(int i = 0; i < k; i++)
        temp[i] = arr[i];

    for(int i = k; i < n; i++)
        arr[i - k] = arr[i];

    for(int i = 0; i < k; i++)
        arr[n - k + i] = temp[i];

    printf("Array after left rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
