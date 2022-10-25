#include <stdio.h>
#include <string.h>

int main()
{

    int age;
    char name[25];

    printf("What's your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you ?");
    scanf("%d", &age);

    printf("Hello %s, how are you ?\n", name);
    printf("you are %d years old\n", age);
    return 0;
}
