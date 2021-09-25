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
	
	printf(" itemNo\t\tprice\t\tqty\n");
	printf(" %d\t\t%.2f\t\t%d\n",item1.itemNo,item1.price,item1.qty);
	printf(" %d\t\t%.2f\t\t%d",item2.itemNo,item2.price,item2.qty);
	return 0;
}
