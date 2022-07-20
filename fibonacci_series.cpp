#include <iostream> 
using namespace std; 
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nxtterm;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nxtterm=t1+t2;
        t1=t2;
        t2=nxtterm;
    }
    return;
}
int main()
{
     int num;
     cin>>num;
     fib(num);
     return 0;
}