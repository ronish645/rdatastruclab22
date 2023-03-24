//Q.No.1
#include <stdio.h>

// Function to find the biggest number of two integers
int* biggest_of_two(int* a, int* b) {
    return (*a > *b) ? a : b; // Return the pointer to the bigger number
}

// Function to find the biggest number of three integers
int* biggest_of_three(int* a, int* b, int* c) {
    int* max_ab = biggest_of_two(a, b); // Find the bigger number of a and b using the biggest_of_two function
    return (*max_ab > *c) ? max_ab : c; // Return the pointer to the bigger number of max_ab and c
}

int main() {
    int x, y, z;
    
    // Ask the user to input two integers
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    
    // Find the bigger number of x and y using the biggest_of_two function
    int* max_two = biggest_of_two(&x, &y);
    
    // Print the result
    printf("The biggest number of the two is: %d\n", *max_two);


    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &zp);
    
    // Find the bigger number of x, y, and z using the biggest_of_three function
    int* max_three = biggest_of_three(&x, &y, &z);
    
    // Print the result
    printf("The biggest number of the three is: %d\n", *max_three);

    return 0;
}


//Q.No.2
#include <stdio.h>

void div_rem(int a, int b, int* quotient, int* remainder) {
    *quotient = a / b; // Calculate the quotient and store it in the pointer variable
    *remainder = a % b; // Calculate the remainder and store it in the pointer variable
}

int main() {
    int x, y, q, r;
    
    // Ask the user to input two integers
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    
    // Call the div_rem function to calculate the quotient and remainder
    div_rem(x, y, &q, &r);
    
    // Print the results
    printf("Quotient: %d\n", q);
    printf("Remainder: %d\n", r);
    
    return 0;
}


//Q.No.3
#include <stdio.h>

int str_len(char* str) {
    int len = 0;
    while (*str != '\0') { // Loop until the end of the string ('\0' character)
        len++; // Increment the length counter
        str++; // Move the pointer to the next character
    }
    return len;
}

int main() {
    char str[100];
    
    printf("Input a string : ");
    scanf("%s", str);
    
    int len = str_len(str);
    
    printf("The length of the given string %s is: %d\n", str, len);
    
    return 0;
}

//Q.No.4
#include <stdio.h>

int str_len(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void str_reverse(char* str) {
    int len = str_len(str);
    char* start = str;
    char* end = str + len - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    printf("Input a string : ");
    scanf("%s", str);
    
    str_reverse(str);
    
    printf("Reverse of the string is : %s\n", str);
    
    return 0;
}


//Q.No.5
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char sentence[MAX_LENGTH];
    int length, i, word_count = 1, char_count = 0;
    
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);
    length = strlen(sentence);
    
    for (i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            word_count++;
            printf("%d ", char_count);
            char_count = 0;
        }
        else {
            char_count++;
        }
    }
    
    printf("%d\n", char_count); // print the last word's character count
    printf("Total number of words: %d\n", word_count);
    
    return 0;
}

//Q.No.6
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove whitespace from sentence
    int i, j = 0;
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            sentence[j++] = sentence[i];
        }
    }
    sentence[j] = '\0';

    // Replace all "." with ":"
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '.') {
            sentence[i] = ':';
        }
    }

    printf("New sentence: %s\n", sentence);

    return 0;
}





//Q.No.7
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}



//Q.No.8
#include <stdio.h>

void factorial(int n, int *result);

int main() {
    int n, result = 1;

    printf("Input a number: ");
    scanf("%d", &n);

    factorial(n, &result);

    printf("%d's factorial: %d\n", n, result);

    return 0;
}

void factorial(int n, int *result) {
    int i;

    for (i = 1; i <= n; i++) {
        *result *= i;
    }
}


//Q.No.9
#include <stdio.h>

void multiple_values(int *arr) {
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
}

int main() {
    int arr[3];

    multiple_values(arr);

    printf("Values returned from function: %d %d %d\n", arr[0], arr[1], arr[2]);

    return 0;
}


//Q.No.10
#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int num_names = 0;

    printf("Enter names: ");
    char name[MAX_NAME_LENGTH];
    fgets(name, MAX_NAME_LENGTH, stdin);

    char *token = strtok(name, " ");
    while (token != NULL && num_names < MAX_NAMES) {
        strcpy(names[num_names], token);
        token = strtok(NULL, " ");
        num_names++;
    }

    for (int i = 0; i < num_names; i++) {
        for (int j = i + 1; j < num_names; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("alphabetical list:\n");
    for (int i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}






