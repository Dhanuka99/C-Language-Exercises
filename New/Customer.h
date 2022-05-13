#include "Vehicle.h"
#define SIZE 3
#include <iostream>

using namespace std;
#include <string.h>

class Customer{
private:
    int customerID;
    char customerName[20];
    Vehicle *vehicles[SIZE];
    CustomerAccount *acc;
public:
    Customer(){

    }
    Customer(int id,char name[]){
        customerID=id;
        strcpy(customerName,name);
    }
    void addVehicle(Vehicle vehicle){
        int i = 0;
        vehicles[i] = new Vehicle();
        i++;
    }

    void displayCustomerDetails(){
        cout<<"Customer ID is "<<customerID<<endl;
        cout<<"Customer name is "<<customerName<<endl;
    }
};
