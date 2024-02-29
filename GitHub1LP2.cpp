#include <iostream>
using namespace std;

class employee
{
public:
    int WorkingHours, Wages, p;
    string name;
    double payroll, Salary, Tax;
    
    int get()
    {
        cout << "\nenter the name of the employee\t";
        cin >> name;

        cout << "enter the hours worked by the employee\t";
        cin >> WorkingHours;

        Wages = 500; // per Hour
    }
    int display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Working Hours : "<< WorkingHours<<endl;
        Salary=Wages*WorkingHours;
        cout<<"Salary : "<< Salary<<endl;
        Tax = 10;
        p = Salary-((Salary/100)*10);
        cout<<"Payroll : "<< p <<endl;
    }
};
int main()
    {
        cout<<"Nitish 2310997190"<<endl<<endl;

        employee ob[4];

        for(int i=1;i<=3;i++)
        {
            ob[i].get();
        }
        for(int i=1;i<=3;i++)
        {
            ob[i].display();   
        }
    }