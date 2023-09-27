#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int *members;
    int length;
} Set;

Set *init();
void insert(Set *set, int member);

int main()
{
    Set *setA = init();

    insert(setA, 5);
    insert(setA, 6);
    insert(setA, 6);
    insert(setA, 6);
    insert(setA, 6);
    insert(setA, 9);

    printf("%d\n", setA->length);

    return (0);
}

Set *init()
{
    Set *new_set = malloc(sizeof(Set));
    new_set->length = 0;
    new_set->members = malloc(sizeof(int));
    return new_set;
}

void insert(Set *set, int member)
{
    bool in_set = false;

    for (int i = 0; i < set->length; i++)
        if (set->members[i] == member)
            in_set = true;

    if (!in_set)
    {
        set->members =
            realloc(set->members, sizeof(int) * (set->length + 1));
        set->members[set->length] = member;
        set->length = set->length + 1;
    }
}
