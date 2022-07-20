#include <iostream> 
#include<cmath>
using namespace std; 

int isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
   
}
int main()
{
     int start,end;
     cin>>start>>end;
     for(int i=start;i<=end;i++)
     {
         if(isprime(i)==true)
         {
             cout<<i<<endl;
         }

     }
     return 0;
}