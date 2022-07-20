#include <iostream> 
using namespace std; 

int binaryToDecimal(int n)
{
    int x=1;
    int ans=0;
    while(n>0)
    {
    int y=n%10;
    ans+=x*y;
    x*=2;
    n/=10;
    }
    return ans;
}
int octalToDecimal(int n)
{
    int x=1;
    int ans=0;
    while(n>0)
    {
    int y=n%10;
    ans+=x*y;
    x*=8;
    n/=10;
    }
    return ans;
}

int hexaToDecimal(string str)
{
    
}

int main()
{   
    /*int binNum;
    cin>>binNum;
    cout<<binaryToDecimal(binNum);*/

    /*int octNum;
    cin>>octNum;
    cout<<octalToDecimal(octNum);*/
     
     string hexstr;
     cin>>hexstr;
     cout<<hexaToDecimal(hexstr);

     return 0;
}