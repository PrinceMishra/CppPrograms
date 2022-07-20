#include <iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
    void set_data()
    {
        cin>>a;
        cin>>b;
    }
    void diplay_data()
    {
        cout<<" "<<a<<"+"<<b<<"i"<<endl;
    }
    Complex add_comp(Complex d)
    {
        Complex temp;
        temp.a=a+d.a;
        temp.b=b+d.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,result;
    cout<<"Enter the first imaginary number:"<<endl;
    c1.set_data();
    cout<<"Enter the second imaginary number:"<<endl;
    c2.set_data();
    result=c1.add_comp(c2);
    result.diplay_data();
}