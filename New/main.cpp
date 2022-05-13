#include <iostream>
#include "Vehicle.h"
#include "Customer.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Customer *c1 = new Customer(001,Dhanuka);
	c1->displayCustomerDetails();
	return 0;
}
