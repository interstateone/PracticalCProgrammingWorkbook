#include <stdio.h>

int hash(char string[]) {
    int index = 0;
    int code = 0;
    while(string[index] != '\0') {
        code += string[index];
        ++index;
    }
    return code;
}

int main(int argc, char const *argv[]) {
    char s1[100] = "Tell me about it";
    printf("%s, %i\n", s1, hash(s1));

    char s2[100] = "a";
    printf("%s, %i\n", s2, hash(s2));

    char s3[100] = "";
    printf("%s, %i\n", s3, hash(s3));

    return 0;
}
