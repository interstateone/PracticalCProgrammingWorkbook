#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char name[100];
	FILE *in_file;

	printf("Name? ");
	fgets(name, sizeof(name), stdin);

	name[strlen(name) - 1] = '\0'; // fgets gets the full string including newline, so we need to replace that last character with the null character

	in_file = fopen(name, "r");
	if (in_file == NULL) {
		fprintf(stderr, "Could not open file %s for reading\n", name);
		exit(8);
	}

	printf("Found file %s\n", name);
	fclose(in_file);

	return 0;
}