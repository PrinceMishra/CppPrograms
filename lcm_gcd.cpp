#include <iostream>
using namespace std;

int gcd(int n1,int n2)
{
    int a,b;
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        for(int i=2;i<=n1&&i<=n2;i++)
        {
            if(n1%i==0&&n2%i==0)
            {
                return i;
            }
        }
    }
}

int lcm(int x,int y)
{
    int res=0;
    res=(x*y)/gcd(x,y);
    return res;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;

    cout<<"GCD(Greatest common divisor) of "<<num1<<" and "<<num2<<"is : "<<gcd(num1,num2)<<endl;
    cout<<"LCM(Least common multiple) of "<<num1<<" and "<<num2<<"is : "<<lcm(num1,num2)<<endl;

    return 0;

}