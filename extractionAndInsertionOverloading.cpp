#include <iostream>
using namespace std;

class Complex
{
private:
    int x, y;

public:
    Complex()
    {
        x = 0;
        y = 0;
    }
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex);
};
istream& operator>>(istream &din, Complex &c)
{
    cout<<"Hello i am insertion operator"<<endl;
    din >> c.x >> c.y;
    return din;
}
ostream& operator<<(ostream &dout, Complex c)
{ 
    cout<<"Hello i am insertion operator"<<endl;
    dout << c.x<<" ";
    dout << c.y<<" ";
    return dout;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << c1;
    return 0;
}