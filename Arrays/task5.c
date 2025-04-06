#include <stdio.h>
int main() {
    int n = 0;
    int index = 0;

    printf("Please enter numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Please Enter %d values:\n", n);

    while (index < n) {
        scanf("%d", &arr[index]);
        index++;
    }

    int min = arr[0], max = arr[0];
    index = 1;

    while (index < n) {
        if (arr[index] < min) {
            min = arr[index];
        }
        if (arr[index] > max) {
            max = arr[index];
        }
        index++;
    }
    int sum = min + max;
    printf("Sum of min and max values = %d\n", sum);

    return 0;
}
