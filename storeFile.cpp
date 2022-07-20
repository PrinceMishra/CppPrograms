#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std; 
int main()
{
     ofstream fout;
     fout.open("hello.txt", ios::ate);
     fout<<"Hello Prince";
     cout<<fout.tellp()<<endl;
     fout.seekp(2,ios_base::beg);
     cout<<fout.tellp()<<endl;
     fout.close();

     /*ifstream fin;
     char ch;
     fin.open("hello.txt");
     ch=fin.get();

     cout<<ch;
     while (!fin.eof())
     {
         cout<<ch;
         ch=fin.get();
     }
     fin.close();*/
     

     
     return 0;
}