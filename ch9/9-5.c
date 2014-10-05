#include <stdio.h>

int max(int array[], int length) {
    int max = 0;
    int index;
    for (index = 0; index < length; ++index) {
        if (array[index] > max) {
            max = array[index];
        }
    }
    return max;
}

void printArray(int array[], int length) {
    int index;
    printf("[");
    for (index = 0; index < length; ++index) {
        printf("%i,", array[index]);
    }
    printf("]");
}

int main(int argc, char const *argv[]) {
    int a1[5] = {1,2,3,4,5};
    printArray(a1, 5);
    printf(", %i\n", max(a1, 5));

    int a2[5] = {1,1,1,1,1};
    printArray(a2, 5);
    printf(", %i\n", max(a2, 5));

    int a3[5] = {2135345544};
    printArray(a3, 5);
    printf(", %i\n", max(a3, 5));

    return 0;
}
