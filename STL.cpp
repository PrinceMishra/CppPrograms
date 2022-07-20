#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int unsigned T;
	cin>>T;
	if(T<=100&&T>=1)
	{
	    int X, val;
	    while(T--)
	    {
	        cin>>X;
	        
	        if(X<=100&&X>=1)
	        {
	          val=X%3;
	          switch(val)
	          {
	              case 0:
	                cout<<"Normal"<<endl;
	              case 1:
	                cout<<"Huge"<<endl;
	              case 2:
	                cout<<"Small"<<endl;
	          }
	        }
	    }
	}
	return 0;
}
