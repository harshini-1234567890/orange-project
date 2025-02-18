#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int array[n];
    int sum = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Sum of array: %d\n", sum);
    return 0;
}
