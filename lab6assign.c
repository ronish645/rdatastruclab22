 #include <stdio.h>

void rotate_array(int arr[], int n, int m) {
    m %= n;
    int temp[m];
    for (int i = 0; i < m; i++) {
        temp[i] = arr[i];
    }
    for (int i = m; i < n; i++) {
        arr[i-m] = arr[i];
    }
    for (int i = 0; i < m; i++) {
        arr[n-m+i] = temp[i];
    }
}

int main() {
    int size, m;
    printf("Enter an array size: ");
    scanf("%d", &size);
    printf("Enter number of rotations: ");
    scanf("%d", &m);
    int arr[size];
    printf("Enter numbers for your array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    rotate_array(arr, size, m);
    printf("Results: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
