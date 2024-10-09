//
// Created by WronM on 09.10.2024.
//

#include "Developer.h"
#include <iostream>

using namespace std;

float Developer::calculateBonus(int value) {
    return value + 0.2*value*(getSalary()+getExperience());
}

void Developer::show() {
    Employee::show();
}

Developer::Developer(string surname1, int age1, int experience1, int salary1) : Employee(surname1, age1, experience1,
                                                                                         salary1) {

}

Developer::Developer() {

}

Developer::~Developer() {
    cout<<"To jest destruktor klasy Developer"<<endl;
}

int Developer::calculateSalary(int value) {
    return (int)calculateBonus(value) + getSalary();
}

