#include <iostream>
using namespace std;
int main()
{
    float avg = 0, oxyl[3][3], temp = 0; 
    int store[3];
    store[0] = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter for " << i + 1 << " round of oxygen level of " << j + 1 << " trinee (range is between 1 and 100):" << endl;
            cin >> oxyl[i][j];
            if (oxyl[i][j] < 1 || oxyl[i][j] > 100)
            {
                cout << "invalid input! Please enter again:" << endl;
                oxyl[i][j] = 0;
                cin >> oxyl[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        avg = 0;
        temp = 0;
        for (int j = 0; j < 3; j++)
        {
            temp = temp + oxyl[j][i];
        }
        avg = temp / 3;
        store[i] = avg;
    }

    if (store[0] < 70 && store[1] < 70 && store[2] < 70)
    {
        cout << "All trainees are unfit" << endl;
    }

    if (store[0] > store[1])
    {
        if (store[0] > store[2])
        {
            cout << " Player 1 has the highest oxygen level is " << store[0] << endl;
        }
        else
        {
            cout << "Player 3 has the highest oxygen level is " << store[2] << endl;
        }
    }
    else if (store[1] > store[2])
    {
        cout << "Player 2 has the highest oxygen level is " << store[1] << endl;
    }
    else
    {
        cout << "Player 3 has the highest oxygen level is " << store[2] << endl;
    }

    return 0;
}