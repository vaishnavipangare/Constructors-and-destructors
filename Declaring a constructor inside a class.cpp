//EXPERIMENT 12
//Name:- VAISHNAVI PANGARE
//Class:- ENTC A
//PRN-25070123501
//Problem Statement:-Write a code to declare a constructor inside a class.


#include <iostream>
using namespace std;

class Student{
    string name;
    long long PRN;
    string branch;
    char division;
    long fee;
    
    public:
    Student(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the PRN:"<<endl;
        cin>>PRN;
        cout<<"Enter the Branch Name:"<<endl;
        cin>>branch;
        cout<<"Enter the Division:"<<endl;
        cin>>division;
        cout<<"Enter the Fee:"<<endl;
        cin>>fee;
    }
    
    void display(){
        cout<<endl<<name<<"\n"<<PRN<<"\n"<<branch<<"\n"<<division<<"\n"<<fee;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}



/*Output:-
Enter the Name:
VAISHNAVI
Enter the PRN:
25070123501
Enter the Branch Name:
ENTC
Enter the Division:
A
Enter the Fee:
300000

VAISHNAVI
25070123501
ENTC
A
300000
*/
