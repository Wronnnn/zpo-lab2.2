#ifndef LAB2_EMPLOYEE_H
#define LAB2_EMPLOYEE_H

#include <iostream>
#include "Employee.h"

using namespace std;

class Employee {
private:
    string surname;
    int age;
    int experience;
    int salary;
public:
    Employee(string surname1, int age1, int experience1, int salary1);
    Employee();
    virtual ~Employee();
    virtual void show();
    virtual int calculateSalary(int value) =0;
    int ageEmployment();
    string getSurname();
    int getAge();
    int getExperience();
    int getSalary();
    virtual float calculateBonus(int value) =0;
};


#endif //LAB2_EMPLOYEE_H
