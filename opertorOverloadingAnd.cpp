#include <iostream> 
using namespace std; 

class Complex
{
    int x,y;
    public:
    Complex()
    {
        x=0;
        y=0;
    }
    void setData()
    {
        cin.operator>>(x);
        
        cin>>y;
    }
    
    void displayData()
    {
        cout<<"The addition of two Complex number is : "<<x<<" + "<<y<<"i"<<endl;
    }
    /*Complex operator +(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;

    }*/
    friend Complex operator +(Complex,Complex);
};

//using friend function we can achieve the result also
Complex operator+(Complex CA, Complex CB)
{
    Complex temp;
    temp.x=CA.x+CB.x;
    temp.y=CA.y+CB.y;
    return temp;
}
int main()
{
     Complex c1,c2;
     Complex result;
     cout<<"Enter two complex number to make a sum: "<<endl;
     c1.setData();
     c2.setData();
     result=c1+c2;
     result.displayData();
     return 0;
}