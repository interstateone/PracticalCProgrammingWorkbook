#import <stdio.h>
#import <string.h>

char firstName[100];
char lastName[100];

int main(int argc, char const *argv[])
{
  printf("Enter first name: ");
  fgets(firstName, sizeof(firstName), stdin);
  firstName[strlen(firstName) - 1] = '\0';

  printf("Enter last name: ");
  fgets(lastName, sizeof(lastName), stdin);

  printf("Full name: %s %s", firstName, lastName);
  return 0;
}
