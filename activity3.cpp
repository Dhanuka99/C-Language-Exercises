#include<stdio.h>

int main(){

	struct Item{
	int itemNo;
	double price;
	int qty;
	}item1,item2;
	

	item1.itemNo = 1;
	item1.price = 10.00;
	item1.qty = 12;
	
	item2.itemNo = 2;
	item2.price = 15.00;
	item2.qty = 4;
	
	printf("item1 no is %d\n",item1.itemNo);
	printf("item1 price is %.2f\n",item1.price);
	printf("item1 qty is %d\n",item1.qty);
	printf("\n");
	printf("item2 no is %d\n",item2.itemNo);
	printf("item2 price is %.2f\n",item2.price);
	printf("item2 qty is %d\n",item2.qty);
	
	return 0;
}
