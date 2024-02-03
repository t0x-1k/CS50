#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *numbers;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Foo";
    people[0].numbers = "123";

    people[1].name = "Bar";
    people[1].numbers = "456";

    people[2].name = "Baz";
    people[2].numbers = "789";

    char *name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found: %s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not found. ");
    return 1;
}
