#include <iostream> 
using namespace std; 
int fact(int n)
{
    int res=1;
    while (n>0)
    {
        res=res*n;
        n--;
    }
    return res;
}
int main()
{
     int n,r;
     cin>>n>>r;
     int comb=0;
     comb=fact(n)/(fact(n-r)*fact(r));
     cout<<comb<<endl;
     return 0;
}