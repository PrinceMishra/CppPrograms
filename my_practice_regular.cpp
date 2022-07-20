#include <iostream>
using namespace std;

int main()
{
    int rowcol;
    int arr[2][2];
    int i, j, num,sum=0;
    cout<<"Enter the number of elements you have to save in an array: "<<endl;
    cin>>rowcol;
    cout<< "Enter the elements of an array" <<endl;
    for (i = 0; i <= rowcol; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << "Enter the number between 1 to 4 to do the desired operation" << endl;
    cin >> num;
    if (num < 1 || num > 4)
    {
        cout << "Sorry,entered wrong number this will not do any kind of operation."<<endl;
    }
    switch (num)
    {
    case 1:
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < i; i++)
            {
                cout << " " << arr[i][j] << " ";
            }
            cout << endl;
        }
        break;

    case 2:
        int counter;
        cout<<"Enter the elememt to search in an array:"<<endl;
        cin>>counter;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < i; i++)
            {
               if(arr[i][j]==counter)
                    cout<<arr[i][j];
            }
            
        }
        
        break;

    case 3 : 
        cout<<"Sum of all the elements is:"<<endl;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < i; i++)
            {
               sum+=arr[i][j];
            }
            
        }
        cout<<sum<<endl;
        break;

    case 4 :
        cout<<"enter position where the element will be updated:"<<endl;
        cin>>i;
        cin>>j;
        cout<<"enter the element in position "<<i<<" "<<j<<" :"<<endl;
        cin>>arr[i][j];
        break; 

    // default:
    //     break;
    }

    return 0;
}