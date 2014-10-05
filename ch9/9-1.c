#include <stdio.h>
#include <stdbool.h>

/* Counts words in a sentence using spaces as delimeters */
int words(char sentence[]) {
    int index;
    int words = 0;
    bool previousSpace = true;
    for (index = 0; sentence[index] != '\0'; ++index) {
        if ((sentence[index] == ' ' || sentence[index] == '\n') && !previousSpace) {
           ++words;
           previousSpace = true;
        }
        else if (sentence[index] != ' ') {
            previousSpace = false;
        }
    }
    return words;
}

int main() {
    char line[100];

    while (1) {
        printf("Enter line:");
        fgets(line, sizeof(line), stdin);
        printf("Number of words: %d\n", words(line));
    }
}
