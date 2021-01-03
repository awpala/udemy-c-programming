#include <stdio.h>
#include <stdlib.h> // provides malloc(), calloc(), realloc(), and free()
#include <string.h>

int main(void)
{
    char *str = NULL;

    // initial memory allocation
    str = (char*)malloc(15 * sizeof(char)); // or equivalently str = (char*)calloc(15, sizeof(char));
    strcpy(str, "jason");
    printf("string = \"%s\", address is %p\n", str, str);

    // reallocating memory
    str = (char*)realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("string = \"%s\", address is %p\n", str, str);

    free(str); // N.B. each call to malloc() or calloc() should have a corresponding call to free()

    return 0;
}