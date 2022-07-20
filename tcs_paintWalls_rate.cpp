#include <iostream>
using namespace std;

int main()
{
    int inWall, exWall;
    float sumIn = 0, sumEx = 0, cost = 0;
    float inArea[10], exArea[10];
    cout << "Enter the numbers of Interior walls : " << endl;
    cin >> inWall;
    if (inWall > 0 || exWall > 0)
    {
        cout << "Enter for every wall how many units of square feet each is havng : " << endl;
        for (int i = 1; i <= inWall; i++)
        {
            cin >> inArea[i];
            sumIn = sumIn + inArea[i];
        }
        cout << "Enter the numbers of Exterior walls : " << endl;
        cin >> exWall;

        cout << "Enter for every wall how many units of square feet each is havng : " << endl;
        for (int i = 1; i <= exWall; i++)
        {
            cin >> exArea[i];
            sumEx = sumEx + exArea[i];
        }
    }
    else
    {
        cout<<"We are sorry, your input is not valid. "<<endl;
    }

    cost = (sumIn * 18) + (sumEx * 12);
    cout << "Total estimated cost which you will have to bear is Rs." << cost << endl;

    return 0;
}