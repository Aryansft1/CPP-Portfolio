#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    Employee() {}

    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    float getSalary()
    {
        return salary;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee employee[3];

    string name;
    int id;
    float salary;

    for (int i = 0; i < 3; i++)
    {
        cin >> name >> id >> salary;
        employee[i] = Employee(name, id, salary);
    }

    int maxIndex = 0;

    for (int i = 1; i < 3; i++)
    {
        if (employee[i].getSalary() > employee[maxIndex].getSalary())
        {
            maxIndex = i;
        }
    }

    cout << "\nEmployee with highest salary:\n";
    employee[maxIndex].show();

    return 0;
}
