///3. Remove Duplicates From a Sorted Array

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int j = 0;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < j; i++)
        printf("%d ", arr[i]);

    return 0;
}
