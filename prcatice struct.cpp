#include <iostream>
using namespace std;
struct student{
    int id;
    char name[20];
    float percent;
};
int main()
{
 student s1;
 cout<<"Enter the Student's Id :"<<endl;
 cin>>s1.id;
 cout<<"Enter the Student's Name :"<<endl;
 cin>>get(s1.name);
 cout<<"Enter the Student's percentage :"<<endl;
 cin>>s1.percent;

 cout<<"\n Display the Student Record:"<<endl;
 cout<<"Student Id = "<<s1.id<<"  "<<"Student Name = "<<set(s1.id)<<"  "<<"Student Percentage = "<<s1.percent<<endl ;

}

