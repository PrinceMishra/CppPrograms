#include <iostream> 
using namespace std; 
int fact(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int comb(int n,int r)
{
    int ncr=0;
    ncr=fact(n)/(fact(n-r)*fact(r));
    return ncr;
}
int main()
{
     int num;
     cin>>num;
     for(int i=0;i<num;i++)
     {
         for(int j=0;j<=i;j++)
         {
            cout<<comb(i,j)<<" ";
         }
         cout<<endl;
     }
     return 0;
}