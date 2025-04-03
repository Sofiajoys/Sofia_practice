#include<stdio.h>
int main()
{
    int arr1[50], arr2[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, n, i, j, found;

    printf("Enter size of array1: ");
    scanf("%d", &n);

    printf("Enter elements of array1: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Missing elements are:\n");
    for (j = 0; j < 9; j++) {
        found = 0; 
        for (i = 0; i < n; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            printf("%d\n", arr2[j]); 
        }
    }

    return 0;
}