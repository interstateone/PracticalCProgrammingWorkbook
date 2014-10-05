#include <stdio.h>

void replace(char string[]) {
    int index = 0;
    while (string[index] != '\0') {
        if (string[index] == '-') {
            string[index] = '_';
        }
        ++index;
    }
}

int main(int argc, char const *argv[]) {
    char s1[100] = "Tell-me-about-it";
    printf("%s, ", s1);
    replace(s1);
    printf("%s\n", s1);

    return 0;
}
