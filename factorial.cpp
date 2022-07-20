#include <iostream> 
using namespace std; 
int fact(int n)
{
  int facto=1;
  while (n>0)
  {
      facto=facto*n;
      n--;
  }
  return facto;
}
int main()
{
     int num;
     cin>>num;
     cout<<fact(num);
     return 0;
}