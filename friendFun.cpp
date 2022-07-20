#include <iostream> 
using namespace std; 
class Employee
{
    float salary=0,daySal=500;
    int days=5;
    public:
    Employee()
    {
        daySal=1000;
        days=1;
        salary=daySal*days;
    }
    Employee(float sal,int day)
    {
        daySal=sal;
        days=day;
        salary=daySal*days;
    }
     friend Employee calSal(Employee);
     void show();
};
Employee calSal(Employee e)
{
    e.salary=e.daySal*e.days;
    return e;
}
void Employee::show()
{
    cout<<"salary = "<<salary<<endl;
}

int main()
{
     Employee e1,e2(5000,5);
     e1.show();
     e2.show();
     e2=calSal(e1);
     e2.show();
     return 0;
}