#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,ti;
    cout<<"input"<<endl;
    cout<<"input"<<endl;
    cout<<"input"<<endl;
    cout<<"input"<<endl;
    cin>>n>>k;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>ti;
        if(ti%k==0)
        {
          count++;  
        }
    }
    cout<<count;
} 