#include <iostream> 
#include <algorithm>
using namespace std; 
int main()
{
     int n;
     cin>>n;
     int temp[10],i=0;
    while(n>0)
    {
        temp[i]=n%10;
        i++;
        n=n/10;
    }
    i--;
    for(int j=i;j>0;j--)
    {
        temp[j]=max(temp[j-1],temp[j]);
    }
    for(int x=i;x>=0;x--)
    {
        cout<<temp[x]<<" ";
    }
     return 0;
}