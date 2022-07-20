#include <iostream> 
using namespace std; 
int main()
{
    int arr[5]={24,75,95,109,27};
    cout<<"Third element of an array:"<<arr[2]<<endl;
    cout<<"Fifth element of an array:"<<arr[4]<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
     
    return 0;
}