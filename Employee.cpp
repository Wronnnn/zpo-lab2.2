//
// Created by WronM on 09.10.2024.
//

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(string surname1, int age1, int experience1, int salary1){
    surname = surname1;
    age = age1;
    experience = experience1;
    salary = salary1;
}

Employee::Employee() {

}

Employee::~Employee() {

}

void Employee::show() {
    cout<<"Nazwisko: "<<surname<<"\nWiek: "<<age<<"\nDoswiadczenie: "<<experience<<"\nWyplata: "<<salary<<endl;
}

string Employee::getSurname() {
    return surname;
}

int Employee::getAge() {
    return age;
}

int Employee::getExperience() {
    return experience;
}

int Employee::getSalary() {
    return salary;
}

int Employee::ageEmployment() {
    return age - experience;
}