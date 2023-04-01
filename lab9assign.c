//Q.no.1
#include <stdio.h>

int main() {
    int size, i, j, k, duplicate;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter each element for the given array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    // loop through each element in the array
    for(i=0; i<size; i++){
        duplicate = 0;
        // loop through previous elements to check for duplicates
        for(j=0; j<i; j++){
            if(arr[i] == arr[j]){
                // duplicate found, mark it and break
                duplicate = 1;
                break;
            }
        }
        // if no duplicate found, print the element
        if(duplicate == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

//Q.no.2
#include <stdio.h>
#include <stdlib.h>

// function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to generate all permutations of arr from index l to r
void permute(int arr[], int l, int r) {
    if (l == r) {
        // base case: arr is fully permuted
        for (int i = 0; i <= r; i++) {
            printf("%d", arr[i]);
        }
        printf(" ");
    } else {
        // recursive case: generate permutations of the remaining elements
        for (int i = l; i <= r; i++) {
            // swap arr[l] with arr[i]
            swap(&arr[l], &arr[i]);

            // generate permutations of the remaining elements
            permute(arr, l+1, r);

            // undo the swap to restore the original array
            swap(&arr[l], &arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All permutations: ");
    permute(arr, 0, n-1);

    return 0;
}


//Q.no.3
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines you want to print: ");
    scanf("%d", &n);

    int num = 1; // starting number
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


//Q.no.4
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // initialize the frequency array to 0

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("No\n"); // strings of different lengths cannot be anagrams
    } else {
        // count the frequency of each character in the first string
        for (int i = 0; str1[i] != '\0'; i++) {
            freq[(int) str1[i]]++;
        }

        // subtract the frequency of each character in the second string
        for (int i = 0; str2[i] != '\0'; i++) {
            freq[(int) str2[i]]--;
        }

        // check if all frequencies are 0
        int is_anagram = 1;
        for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                is_anagram = 0;
                break;
            }
        }

        if (is_anagram) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

//Q.no.5
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter each element for the given array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1; // initialize all frequencies to -1
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark duplicates as 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Frequency for each element: ");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d-%d ", arr[i], freq[i]);
        }
    }
    printf("\n");

    return 0;
}


//Q.no.6
