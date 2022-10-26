#include <stdio.h>
#include <string.h>

#include "ItemToPurchase.h"
#include "ItemToPurchase.c"

int main(void) {
  int total;
  ItemToPurchase item1;
  ItemToPurchase item2;

  printf("Item 1\n");
  printf("Enter the item name:\n");
  scanf("%[^\t\n]s", item1.itemName);
  printf("Enter the item price:\n");
  scanf("%d", &(item1.itemPrice));
  printf("Enter the item quantity:\n");
  scanf("%d", &(item1.itemQuantity));
  printf("\n");

  char c;
  c = getchar();
  while (c != '\n' && c != EOF) {
    c = getchar();
  }

  printf("Item 2\n");
  printf("Enter the item name:\n");
  scanf("%[^\t\n]s", item2.itemName);
  printf("Enter the item price:\n");
  scanf("%d", &(item2.itemPrice));
  printf("Enter the item quantity:\n");
  scanf("%d", &(item2.itemQuantity));
  printf("\n");

  total = (item1.itemPrice * item1.itemQuantity) +
          (item2.itemPrice * item2.itemQuantity);

  printf("TOTAL COST\n");
  PrintItemCost(item1);
  PrintItemCost(item2);
  printf("Total: $%d\n", total);

  return 0;
}
