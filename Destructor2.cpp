// EXPERIMENT-12
// Name:- VAISHNAVI PANGARE
// PRN-25070123501
// Class-ENTC A3
//Problem Statement:- Write a code to declare a deconstructor.


#include <iostream>
using namespace std;

class Date{
public:
int d = 26;
int m = 8;
int y = 2023;

~Date(){
    cout<<"Destructor Called. "<<endl;
};
};

int main(){
    Date d1,d2,d3,d4;
    int i;
    for(i=0;i<4;i++){
        Date d1;
    }
}

/*Output :

Destructor Called. 
Destructor Called. 
Destructor Called. 
Destructor Called. 
Destructor Called. 
Destructor Called. 
Destructor Called. 
Destructor Called.

*/
