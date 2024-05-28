#include <stdio.h>
#include <stdlib.h>

void orderVectors(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (vector[i] > vector[j]) {
                int temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}

void printVector(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the vector: ");
    scanf("%d", &size);

    int vector[size];

    // Fill vector with integers
    for (int i = 0; i < size; i++) {
        printf("Enter an integer for the vector: ");
        scanf("%d", &vector[i]);
    }

    // Order the vector in ascending sequence
    orderVectors(vector, size);

    // Display the vector in ascending order
    printf("Vector in ascending order:\n");
    printVector(vector, size);

    // Ask the user for an integer and search for this number in the vector
    int num;
    printf("Enter an integer to search for: ");
    scanf("%d", &num);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (vector[i] == num) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The number %d was found in the vector.\n", num);
    } else {
        printf("The number %d was not found in the vector.\n", num);
    }

    return 0;
}
