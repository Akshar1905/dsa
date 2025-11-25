///5. Implement Linear and Binary Search
///Linear Search Implementation
#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    int found = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Key found at index %d\n", found);
    else
        printf("Key not found\n");

    return 0;
}

///Binary Search Implementation
#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    int found = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Key found at index %d\n", found);
    else
        printf("Key not found\n");

    return 0;
}
