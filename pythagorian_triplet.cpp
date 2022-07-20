#include <iostream> 
using namespace std; 
int max(int a,int b)
{
    int temp;
    if(a>b)
    {
        return a;
    }
    else if (b>a)
    {
       return b;
    }
    else
    {
        return false;
    }
}

int square(int n)
{
  return n*n;
}
bool check(int n1, int n2, int n3)
{
    int a,b,c;
    a=max(n1,max(n2,n3));
    if(a==n1)
    {
        b=n2;
        c=n3;
    }
    else if(a==n2)
    {
        b=n1;
        c=n3;
    }
    else
    {
        b=n1;
        c=n2;
    }

    if(square(a)==square(b)+square(c))
    {
        return(true);
    }
    else
    {
        return false;
    }
    
}


int main()
{
     int num1,num2,num3;
     cin>>num1>>num2>>num3;
     if(check(num1,num2,num3))
     {
         cout<<"It's a Pythagorian Triplet";
     }
     else
     {
         cout<<"It's not a Pythagorian Triplet";
     }
     
     return 0;
}