// EXPERIMENT-12
// Name:- VAISHNAVI PANGARE
// PRN-25070123501
// Class-ENTC A3
//Problem Statement:- Write a code to declare a deconstructor.

#include <iostream>
using namespace std;
int count=0;

class destruct{
    public:
    destruct(){
        count++;
        cout<<"No. of objects created:"<<count<<endl;
    }
    
    ~destruct(){
        count--;
        cout<<"No. of objects destroyed:"<<count<<endl;
    }
};

int main() 
{
  destruct aa,bb,cc;
  {
      destruct dd;
  }
  return 0;
}


/*Output:-

No. of objects created:1
No. of objects created:2
No. of objects created:3
No. of objects created:4
No. of objects destroyed:3
No. of objects destroyed:2
No. of objects destroyed:1
No. of objects destroyed:0
*/
