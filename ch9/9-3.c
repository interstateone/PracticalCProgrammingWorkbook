#include <stdio.h>

int count(int number, int array[], int length) {
    if (length == 0) return 0;
    if (*array == number) {
        return 1 + count(number, array + 1, length - 1);
    } else {
        return count(number, array + 1, length - 1);
    }
}

void printArray(int array[], int length) {
    int index;
    printf("[");
    for (index = 0; index < length; ++index) {
        printf("%i,", array[index]);
    }
    printf("]");
}

int main() {
    int a1[5] = {1,2,3,4,5};
    int number = 2;
    printArray(a1, 5);
    printf(", %i, %i\n", number, count(number, a1, 5));

    int a2[5] = {2,2,2,2,2};
    number = 2;
    printArray(a2, 5);
    printf(", %i, %i\n", number, count(number, a2, 5));

    int a3[1] = {2};
    number = 0;
    printArray(a3, 5);
    printf(", %i, %i\n", number, count(number, a3, 5));

    return 0;
}
