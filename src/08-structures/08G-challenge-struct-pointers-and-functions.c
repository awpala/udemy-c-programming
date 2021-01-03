#include <stdio.h>
#include <stdlib.h>

struct Item {
    char* itemName;
    int qty;
    float price;
    float amount;
};

void readItem(struct Item *i);
void printItem(struct Item *i);

int main(void)
{
    struct Item item, *pItem;
    pItem = &item;

    pItem->itemName = (char*)malloc(30 * sizeof(char));

    if (!pItem) { // guard for failed allocation via malloc()
        exit(-1);
    }

    // From the terminal, run as: ./08G-challenge-struct-pointers-and-functions
    readItem(pItem);
    printItem(pItem);

    free(pItem->itemName);
    pItem->itemName = NULL;

    return 0;
}

void readItem(struct Item *i)
{
    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->qty);
    printf("\n");

    i->amount = (float)i->qty * i->price;
}

void printItem(struct Item *i)
{
    printf("Name: %s\n", i->itemName);
    printf("Price: $%.2f\n", i->price);
    printf("Quantity: %d\n", i->qty);
    printf("Total Amount: $%.2f\n", i->amount);
}