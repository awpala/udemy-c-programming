#include <stdio.h>

int main()
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day) {
        if (day == Wednesday)
            continue;
        
        if (day == Saturday || day == Sunday)
            break;
        
        printf("Today is weekday %d. It is not Wendesday!\n", day + 1);
    }

    return 0;
}