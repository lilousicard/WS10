#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

typedef struct ItemToPurchase{
	char itemName[50];
	int itemPrice;
	int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(struct ItemToPurchase* item);
void PrintItemCost(struct ItemToPurchase item);
#endif
