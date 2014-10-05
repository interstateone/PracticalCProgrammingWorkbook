#include <stdio.h>

int begins(char string1[], char string2[]) {
    int index = 0;
    while (string1[index] != '\0') {
        if (string2[index] != string1[index]) {
            return 0;
        }
        ++index;
    }
    return 1;
}

int main() {
    char s1[100] = "a";
    char s2[100] = "abracadabra";
    printf("%s, %s, %i\n", s1, s2, begins(s1, s2));
    char s3[100] = "booster";
    char s4[100] = "booster seat";
    printf("%s, %s, %i\n", s3, s4, begins(s3, s4));
    char s5[100] = "tennis";
    char s6[100] = "hockey";
    printf("%s, %s, %i\n", s5, s6, begins(s5, s6));
    return 0;
}
