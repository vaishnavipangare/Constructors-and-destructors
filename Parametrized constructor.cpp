//EXPERIMENT-12
//NAME:VAISHNAVI PANGARE
//PRN:25070123501
//Class:- ENTC A3
//Problem Statement:- Write a code to declare parametrized constructor.

#include <iostream>
using namespace std;

class Practice{
    int a,b;
    public:
    Practice(int m,int n){
        a=m;
        b=n;
    }
    
    void display(){
      cout<<"a="<<a<<endl<<"b="<<b;  
    }
};
   

int main() {
    Practice p(7,8);
    p.display();

    return 0;
}


/*Output:-

a=7
b=8

*/
