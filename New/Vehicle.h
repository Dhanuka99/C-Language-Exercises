#include "Customer.h"
class Vehicle{
private:
    char vehicleNo[20];
    char vehicleModel[20];
    Customer *customer;
public:
    Vehicle(){

    }
    Vehicle(char no[],char model[]){
        strcpy(vehicleNo,no);
        strcpy(vehicleModel,model);

    }

    void setCustomer(Customer cust){
        customer = cust;
    }

    void displayVehicleDetails(){
        cout<<"Vehicle No is "<<vehicleNo<<endl;
        cout<<"Vehicle Model is "<<vehicleModel<<endl;
    }
};
