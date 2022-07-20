#include <iostream> 
using namespace std;

int sum(int num)
    {
        int total=0;
        total=(num*(num+1))/2;
    }
int main()
{
     int n;
     cin>>n;
     // first method without uing function

     /*for(int i=1; i<=n;i++)
     {
        sum+=i; 
     }
     cout<<sum<<endl;
     return 0;*/

     //Second method by using function

    cout<<sum(n);

}