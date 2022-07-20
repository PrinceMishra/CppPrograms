#include <iostream> 
using namespace std;

char CoinState(char state, int n)
{
    if(n%2==1)
    {
        if(state=='T')
        {
            return 'H';
        }
        else
        {
            return 'T';
        }
    }
    else if(n%2==0)
    {
        if(state=='T')
        {
            return 'T';
        }
        else{
            return 'H';
        }
    }

}

int main()
{
    char state;
    int num;
    cin>>state>>num;
    cout<<CoinState(state,num);
     
     return 0;
}