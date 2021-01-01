int myGlobal = 0; // global variable

int main()
{
    int myLocalMain = 0; // local variable to main()
    // can access myGlobal and myLocalMain here, cannot access x

    return 0;
}

void myFunction()
{
    int x; // local variable to myFunction
    // can access myGlobal and x here
}