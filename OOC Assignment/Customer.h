#define SIZE 5
#include <iostream>
#include "Vehicle.h"
class Customer{
	private:
		int customerID;
		char customerNIC[10];
		Vehicle *vehicles[SIZE];
	public:
		Customer();
};
