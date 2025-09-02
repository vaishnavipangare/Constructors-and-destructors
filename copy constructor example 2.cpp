// EXPERIMENT-12
// Name:- VAISHNAVI PANGARE
// PRN-25070123501
// Class-ENTC A3
//Problem Statement:- Write a code to print output by calling the copy constructor.


#include <iostream>
using namespace std;

class Car {
    string Car_name;
    string Manufacturer;
    int Price;

public:
    
    Car(string c, string m, int p) {
        Car_name = c;
        Manufacturer = m;
        Price = p;
    }

   
    Car(const Car &c) {
        Car_name = c.Car_name;
        Manufacturer = c.Manufacturer;
        Price = c.Price;
        cout << "copy constructor called!!" << endl;
    }

    void display() {
        cout << "Car Name: " << Car_name 
             << "\nManufacturer: " << Manufacturer 
             << "\nPrice: " << Price << endl;
    }
};

int main() {
    Car c1("ASPIRE", "FORD", 1500000); 
    c1.display();

    Car copyC(c1);   
    copyC.display();

    return 0;
}


/*Output:-

Car Name: ASPIRE
Manufacturer: FORD
Price: 1100000
copy constructor called!!
Car Name: ASPIRE
Manufacturer: FORD
Price: 1100000
*/
