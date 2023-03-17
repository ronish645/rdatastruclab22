//Q.No.1
#include <stdio.h>

int main() {
    int m, n, p, i, j, k;       //Declare the variables.

    // Prompt the user for the size of the first matrix
    printf("Enter 2-dimensional array size: ");
    scanf("%d %d", &m, &n);

    // Declare the first matrix
    int A[m][n];

    // Prompt the user to enter the elements of the first matrix
    printf("Enter numbers for each element in the first array: \n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Prompt the user for the size of the second matrix
    printf("Enter 2-dimensional array size: ");
    scanf("%d %d", &n, &p);

    // Declare the second matrix
    int B[n][p];

    // Prompt the user to enter the elements of the second matrix
    printf("Enter numbers for each element in the second array: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply the two matrices and store the result in a third matrix
    int C[m][p];

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Result after multiplication of two arrays:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Q.No.2
#include <stdio.h>

// Function that swaps two integers using pointers
void swap(int* a, int* b) {
    int temp = *a;  // Store the value of a in a temporary variable
    *a = *b;        // Assign the value of b to a
    *b = temp;      // Assign the value of the temporary variable to b
}

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two numbers a & b: ");
    scanf("%d %d", &a, &b);

    // Print the values of a and b before the swap
    printf("Before swapping, a = %d, b = %d\n", a, b);

    // Call the swap function with the addresses of a and b
    swap(&a, &b);

    // Print the values of a and b after the swap
    printf("After swapping by pointer, a = %d, b = %d\n", a, b);

    return 0;
}

//Q.no.3
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to hold the input string

    printf("Enter any string: ");

    // Read a line of text from stdin and store it in the str array
    fgets(str, sizeof(str), stdin);

    printf("Result: ");
    
    // Write the string to stdout
    puts(str);

    return 0;
}

//Q.no.4
#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {     //if n is 0 or 1, return 1
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case: call factorial with n-1
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial=%d", factorial(n)); // Call the factorial function

    return 0;
}

//Q.no.5
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            printf("not a palindrome string\n");
            return 0;
        }
    }

    printf("yes, it is a palindrome string\n");

    return 0;
}


//Q.no.6
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merge[200];
    int size1, size2, size3 = 0;
    int i, j, k;

    // Input the size and elements of the first array
    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);
    printf("Enter each element: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size and elements of the second array
    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);
    printf("Enter each element: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays, excluding repeating elements
    for (i = 0; i < size1; i++) {
        merge[size3] = arr1[i];
        size3++;
    }
    for (i = 0; i < size2; i++) {
        for (j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                break;
            }
        }
        if (j == size1) {
            merge[size3] = arr2[i];
            size3++;
        }
    }

    // Print the merged array
    printf("Result of merging: ");
    for (i = 0; i < size3; i++) {
        printf("%d ", merge[i]);
    }
    printf("\n");

    return 0;
}


//Q.no.7
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int binomial_coefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

void print_binomial_coefficients(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomial_coefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the order of binomial power expression: ");
    scanf("%d", &n);
    printf("Results of printing on monitor: \n");
    print_binomial_coefficients(n);
    return 0;
}


//Q.no.8
#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    // Sort the array
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Shift array elements to remove duplicates
    int newSize = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != arr[i+1]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    // Print the new array without duplicates
    printf("Results of removing duplicates: ");
    for(int i=0; i<newSize; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers for each element: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, n);
    return 0;
}


//Q.no.9
#include <stdio.h>

// A function to remove duplicate elements from an unsorted array
int remove_duplicates(int arr[], int size) {
    int index = 0;
    for (int i = 0; i < size; i++) {
        int flag = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            arr[index] = arr[i];
            index++;
        }
    }
    return index;
}

// A function to sort an array using bubble sort
void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// A function to find the kth smallest element in an array
int kth_smallest_element(int arr[], int size, int k) {
    // Sort the array using bubble sort
    bubble_sort(arr, size);
    
    // Remove duplicates from the sorted array and get the new size
    int new_size = remove_duplicates(arr, size);
    
    // If k is greater than the size of array after removing duplicates, return -1
    if (k > new_size) {
        return -1;
    }
    
    // Return the kth smallest element
    return arr[k-1];
}

int main() {
    int size, k;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter numbers for each element: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter desired kth smallest element: ");
    scanf("%d", &k);
    
    int result = kth_smallest_element(arr, size, k);
    
    if (result == -1) {
        printf("Invalid value of k");
    } else {
        printf("Result of %dth smallest element: %d", k, result);
    }
    
    return 0;
}

//Q.no.10
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, mean, deviation = 0.0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter numbers for each element: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;

    for(i = 0; i < n; i++)
        deviation += pow(arr[i] - mean, 2);

    printf("Result of Standard Deviation: %.10f\n", sqrt(deviation / n));

    return 0;
}
