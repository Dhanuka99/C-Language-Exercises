#include <iostream>
#include <iomanip>
using namespace std;
void printCompanyLabel();
float calculateTotal(int qty,int productCode,float arr[10]);
float relationship(char type);
void print(int productCode[10],float unitPrices[10]);
float total = 0.00;
int main() {
 
	int priceCode,qty;
	char type;
	//product Prices 
	float unitPrices[10] = {75.00,100.00,55.00,25.00,10.00,50.00,150.00,65.00,200.00,175.00};
	//product Codes
	int productCode[10] = {0,1,2,3,4,5,6,7,8,9};
	printCompanyLabel();
	
	print(productCode,unitPrices);
	cout << "Hint - If You Over the Choice Product, press -1 for the price code"<<endl;
	cout << " :) Loyality Customer 50% Off & Non Loyality Customer 10% Off"<<endl;
	//get customer input for choice product
	cout << "Enter Price Code :";
	cin >> priceCode;
	while(priceCode!= -1){
		cout << "Enter Quantity : ";
		cin >> qty;
		total += calculateTotal(qty,priceCode,unitPrices);
		cout << "Enter Price Code :";
		cin >> priceCode;
	}
	cout << "Your Amout is " << total<<endl;
	
	
	cout << "Are you Loyality Customer or No : (Press Y/N) : ";
	cin >> type;
	
	float final = relationship(type);
	
	cout << "Your Final Amout is " << final<<endl;
	cout<< "********THANK YOU! COME AGAIN!*******";
  
  
  return 0;
}


void printCompanyLabel(){
	 cout << "\t\tSTAR SUPER MARKET\t\t"<<endl;
}

//calculate the total amout before adding discout 
float calculateTotal(int qty,int productCode,float arr[10]){
	return total + arr[productCode]*qty;
}
//find customer relationship on our supermarket and to give the discount
float relationship(char type){
	if(type== 'Y' || type == 'y'){
		//if loyality customer 50% discount 
		return total - (total*50/100);
	}else{
		//if non-loyality customer 10% discount 
		return total - (total*10/100);
	}
}
//print the price table 
void print(int productCode[10],float unitPrices[10]){
	int i;

    cout << "|-" << setfill('*') << setw(24) << "-|" <<endl;
    cout << setfill(' ') << setw(12) << left << "|Product Code|" <<  setfill(' ');
    cout << setw(14) << right << "|Price |" <<  endl;
    cout << "|-" <<  setfill('*') << setw(24) << "-|" << endl;

    for (i=0; i<10; i++)
    {
        
       
        cout <<"|" <<  setfill(' ') << setw(7) << fixed << productCode[i] <<"  { | }";
        cout << setw(7) << right << fixed << setprecision(2) << unitPrices[i] << "   |" << endl;
            
    }
    cout << "'-" << setfill('-') << setw(24) << "-'" << endl;
}


