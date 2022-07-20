 
#include <bits/stdc++.h>
using namespace std; 
int  FastestCar(int t,int d1,int d2,int d3)
{
     int s1,s2,s3;
     s1=d1/t;
     s2=d2/t;
     s3=d3/t;
     if (s1>s2)
     {
          return max(s1,s3);
     }
     else if(s2>s3)
     {
          return max(s2,s1);
     }
     else 
     {
          return s3;
     }

}
int main()
{
     int t, d1, d2, d3;
     cin>>t>>d1>>d2>>d3;
     int result =FastestCar(t,d1,d2,d3);
     cout<<result;

     return 0;
}

