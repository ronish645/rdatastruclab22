//Q.no.1
#include <stdio.h>

int main() {
    // Prompt the user to enter the array size and number of rotations
    int array_size, num_rotations;
    printf("Enter an array size: ");
    scanf("%d", &array_size);
    printf("Enter number of rotations: ");
    scanf("%d", &num_rotations);

    // Declare the array and read in its elements from the user
    int arr[array_size];
    printf("Enter numbers for your array: ");
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform the rotations
    for (int i = 0; i < num_rotations; i++) {
        int temp = arr[array_size-1];
        for (int j = array_size - 1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    // Print the rotated array
    printf("Results: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Q.no.2
#include <stdio.h>

int main() {
    int length, num_areas, start, end, trees_to_move = 0;

    // Prompt the user to input the length of the road and the number of areas
    printf("Enter the length of the road: ");
    scanf("%d", &length);
    printf("Enter how many areas are needed for new facilities: ");
    scanf("%d", &num_areas);

    // Loop through each area and prompt the user to input its starting and ending
    // points, and count the number of trees that need to be moved in each area
    for (int i = 1; i <= num_areas; i++) {
        printf("area#%d starting point & ending point: ", i);
        scanf("%d %d", &start, &end);

        // Calculate the number of trees to move in this area
        int trees_in_area = (end - start) / 2 + 1;
        trees_to_move += trees_in_area;
    }

    // Print the result of the total number of trees that need to be moved
    printf("Result of number of trees needed to move: %d\n", trees_to_move);

    return 0;
}



//Q.no.3
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);  // read in an integer from the keyboard
    
    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
        printf("%d is divisible by 3, 5, and 7\n", num);
    } else if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by 3 and 5\n", num);
    } else if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is divisible by 3 and 7\n", num);
    } else if (num % 5 == 0 && num % 7 == 0) {
        printf("%d is divisible by 5 and 7\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5\n", num);
    } else if (num % 7 == 0) {
        printf("%d is divisible by 7\n", num);
    } else {
        printf("NOT divisible by 3, 5 or 7\n");
    }
    
    return 0;
}

//Q.no.4
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define an array to store lake sizes
    int lake_sizes[4] = {0};

    // Student A's description
    lake_sizes[1] = 4;  // d is the biggest
    lake_sizes[3] = 1;  // h is the smallest
    lake_sizes[0] = 3;  // b is in third place

    // Student B's description
    lake_sizes[3] = 4;  // h is the biggest
    lake_sizes[1] = 1;  // d is the smallest
    lake_sizes[0] = 2;  // b is in second place
    lake_sizes[2] = 3;  // t is in third place

    // Student C's description
    lake_sizes[3] = 1;  // h is the smallest
    lake_sizes[1] = 3;  // d is in third place

    // Student D's description
    lake_sizes[0] = 4;  // b is the biggest
    lake_sizes[2] = 1;  // t is the smallest
    lake_sizes[3] = 2;  // h is in second place
    lake_sizes[1] = 3;  // d is in third place

    // Sort the lakes by size (in descending order)
    int i, j, temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (lake_sizes[i] < lake_sizes[j]) {
                temp = lake_sizes[i];
                lake_sizes[i] = lake_sizes[j];
                lake_sizes[j] = temp;
            }
        }
    }

    // Print the sorted sequence of lake sizes
    printf("Size sequence from big to small:\n");
    printf("Lake d: %d\n", lake_sizes[0]);
    printf("Lake b: %d\n", lake_sizes[1]);
    printf("Lake t: %d\n", lake_sizes[2]);
    printf("Lake h: %d\n", lake_sizes[3]);

    return 0;
}

//Q.no.5
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);  // read in an integer from the keyboard

    if (num == 1) {  // if input is already 1
        printf("%d\n", num);
        return 0;
    }

    while (num != 1) {  // continue looping until we reach 1
        printf("%d ", num);  // print the current number in the sequence
        if (num % 2 == 0) {  // if num is even
            num /= 2;  // divide by 2
        } else {  // num is odd
            num = 3 * num + 1;  // multiply by 3 and add 1
        }
    }
    printf("%d\n", num);  // print the final number (always 1)
    
    return 0;
}
