#include <iostream> 
#include <string.h>
using namespace std; 

class Candidate
{
    char str[20];
    int rollNo;
    Candidate()    
    {
        strcpy(str,"Prince");
        rollNo=01;
        cout<<"Object Created"<<endl;
    }
    public:

    static Candidate* initialize()
    {
        Candidate *c=new Candidate;
        cout<<"Object Crearted and then initialized"<<endl;
        return c;
    }

    void print()
    {
         cout<<"Name of a candidate :"<<str<<endl;
         cout<<"Roll.No. of a candidate :"<<rollNo<<endl;
    }
    

};

static void namo()
{
    cout<<"I am out of the class"<<endl;
    static int count=0;
    cout<<count;
    count++;
}

int main()
{
    
     
     Candidate *c1=Candidate::initialize();
     c1->print();
     namo();
     namo();
     namo();
     
     return 0;
}