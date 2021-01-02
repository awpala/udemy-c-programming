#include <stdio.h>

int main()
{
    // pointer to a constant
    long value = 9999L;
    const long *pValue = &value; // pValue cannot change value from 9999L
    // *pValue = 8888L; // error!
    value = 7777L; // valid -- only pValue is const, not value
    long number = 8888L;
    pValue = &number; // okay to change the address value stored in pValue, just not *pValue


    // constant pointer
    int count = 43;
    int *const pCount = &count; // pCount is a constant pointer -- its value (stored address) cannot be changed
    int item = 34;
    // pCount = &item; // error -- cannot change the value stored by pCount
    *pCount = 345; // okay to change the value of count, however


    // constant pointer to a constant
    int val = 25;
    const int *const pVal = &val; // neither val's value nor pVal's value can be changed by pVal
    val = 30; // this is still permissible, however (to prevent this, declare const int val = 25; instead)

    return 0;
}