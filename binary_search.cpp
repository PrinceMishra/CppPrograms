#include <iostream> 
using namespace std; 

int binary_search(int arr[],int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e=mid-1;
        else if(arr[mid]<key)
            s=mid+1;    
         
    }
    return -1;
}
int main()
{
     int arr[5];
     int n=0;
     cout<<"Enter the number of elements you want to store"<<endl;
     cin>>n;
     cout<<"Enter "<<n<<" elements to store"<<endl;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"These are your "<<n<<" stored elements."<<endl;
     for(int i=0;i<n;i++)
     {
         cout<<" "<<arr[i]<<" ";
     }
     cout<<endl;
     
    cout<<"Enter the number to check whether the element is in the array and what is the corresponding index number "<<endl;
    int counter=0;
    cin>>counter;
    int result =binary_search(arr,n,counter);
    if(result==-1)
        cout<<"Sorry your entered number not found"<<endl;
    else
        cout<<"Your entered number is matched at index number "<<result;
    
     return 0;
}