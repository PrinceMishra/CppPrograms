#include <iostream>
#include <conio.h>
using namespace std;
struct student{
    int id;
    char name[20];
    float percent;

    void input()
    {
        cout<<"Enter the Student's Id :"<<endl;
        cin>>id;
        cout<<"Enter the Student's Name :"<<endl;
        cin>>name;
        cout<<"Enter the Student's percentage :"<<endl;
        cin>>percent;
    }

    void display()
    {
        cout<<"\n Display the Student Record:"<<endl;
        cout<<"Student Id = "<<id<<"  "<<"Student Name = "<<name<<"  "<<"Student Percentage = "<<percent<<endl ;

    }
};
int main()
{
 
 student s1;
 s1.input();
 s1.display();

 

 
}

