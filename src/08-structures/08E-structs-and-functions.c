#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Family {
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool areSiblings(struct Family const *pMember1, struct Family const *pMember2);

int main(void)
{
    struct Family jason = {
        .name = "Jason Doe",
        .age = 20,
        .father = "John Doe",
        .mother = "Jane Doe"
    };

    struct Family jamie = {
        .name = "Jamie Doe",
        .age = 15,
        .father = "John Doe",
        .mother = "Jane Doe"
    };

    // pointers to structs as arguments
    struct Family *pJason, *pJamie;
    pJason = &jason;
    pJamie = &jamie;

    printf("%s and %s %s siblings\n", jason.name, jamie.name, areSiblings(pJason, pJamie) ? "are" : "are not");

    return 0;
}

// this function takes pointers to structs as arguments
bool areSiblings(struct Family const *pMember1, struct Family const *pMember2) // N.B. const renders arguments "read-only" (i.e., cannot modify their members)
{
    return !(strcmp(pMember1->mother, pMember2->mother) || strcmp(pMember1->father, pMember2->father)) ? true : false;
}