#include <stdio.h>

// Function to find maximum and minimum values in the list
void findMaxMin(int arr[], int start, int end, int *max, int *min) {
    if (start == end) {
        *max = arr[start];
        *min = arr[start];
        return;
    }

    if (end - start == 1) {
        *max = (arr[start] > arr[end]) ? arr[start] : arr[end];
        *min = (arr[start] < arr[end]) ? arr[start] : arr[end];
        return;
    }

    int mid = (start + end) / 2;
    int max1, min1, max2, min2;
    findMaxMin(arr, start, mid, &max1, &min1);
    findMaxMin(arr, mid + 1, end, &max2, &min2);

    *max = (max1 > max2) ? max1 : max2;
    *min = (min1 < min2) ? min1 : min2;
}

int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val, min_val;
    findMaxMin(arr, 0, n - 1, &max_val, &min_val);
    printf("Maximum value: %d\n", max_val);
    printf("Minimum value: %d\n", min_val);
    return 0;
}
