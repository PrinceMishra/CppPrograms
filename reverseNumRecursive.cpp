#include <iostream> 
using namespace std; 
int rem=0;
int sum=0;
int reverse(int n)
{
    if(n!=0)
    {
        rem=n%10;
       sum=sum*10+rem;
       n=n/10;
       return reverse(n);
    }

    else 
    {
        cout<<sum<<endl;
    }
}
int main()
{
    int num;
    cin>>num;
    reverse(num);
     return 0;
}