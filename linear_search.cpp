#include <iostream> 
using namespace std; 
int main()
{
     int arr[5];
     int n=0;
     cout<<"Enter the number of elements you want to store"<<endl;
     cin>>n;
     cout<<"Enter "<<n<<"Elements to store"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"These are your "<<n<<" stored elements."<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<" "<<arr[i]<<" ";
     }
     
    cout<<"Enter the number to check whether the element is in the array and what is the corresponding index number "<<endl;
    int counter=0;
    cin>>counter;
    for(int i=0; i<n;i++)
    {
        if(arr[i]==counter)
        {
            cout<<"Congratulations! your input is matched at the index number "<<i<<endl;
            break;
        }
         
    }
     return 0;
}