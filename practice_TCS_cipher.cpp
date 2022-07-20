#include <iostream>
using namespace std;

void encrypt_cipher(char *msg, int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        cout << msg[i];
    }
    cout << endl;

    for (int i = 0; i < len; i++)
    {
        char temp = msg[i];
        if (temp >= 48 && temp <= 57)
        {
            if (temp + key <= 57)
            {
                /*cout << " 48 to 57  ";
                cout << temp << "  ";*/
                temp = temp + key;
                // cout << temp << "  ";
            }
            else
            {
                /*cout << " other than 48 to 57 ";
                cout << temp << "  ";*/
                int left = ((temp + key) - 57);
                temp = left + 47;
                // cout << temp << "  ";
            }
        }

        else if (temp >= 65 && temp <= 90)
        {
            if (temp + key <= 90)
            {
                /* cout << " 65 to 90 ";
                 cout << temp << "  ";*/
                temp = temp + key;
                // cout << temp << "  ";
            }
            else
            {
                /* cout << " other than 65 to 90 ";
                 cout << temp << "  ";*/
                int left = ((temp + key) - 90);
                temp = left + 64;
                // cout << temp << "  ";
            }
        }
        else if (temp >= 97 && temp <= 122)
        {
            if (temp + key <= 122)
            {
                /*cout << " 97 to 122 ";
                cout << temp << "  ";*/
                temp = temp + key;
                // cout << temp << "  ";
            }
            else
            {
                /*cout << " other than 97 to 122 ";
                cout << temp << "  ";*/
                int left = ((temp + key) - 122);
                temp = left + 96;
                // cout << temp << "  ";
            }
        }

        else
        {
            cout << "invalid input" << endl;
        }

        msg[i] = temp;
    }
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << msg[i];
    }
    cout << endl;
}

int main()
{
    int msg_size;
    cout << "Please enter the length of the message you have to print (calculate it by counting single length" << endl;
    cin >> msg_size;
    char msg[msg_size];
    int key;
    cout << "Enter the desired key to shift with or encode" << endl;
    cin >> key;
    cout << "Enter the Message to encrypt" << endl;
    for (int i = 0; i < sizeof(msg); i++)
    {
        cin >> msg[i];
    }

    encrypt_cipher(msg, msg_size, key);
    for (int i = 0; i < sizeof(msg); i++)
    {
        cout << msg[i];
    }
    cout << endl;
}