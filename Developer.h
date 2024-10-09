//
// Created by WronM on 09.10.2024.
//

#ifndef LAB2_DEVELOPER_H
#define LAB2_DEVELOPER_H


#include "Employee.h"

class Developer: public Employee {
public:
    Developer(string surname1, int age1, int experience1, int salary1);
    Developer();
    ~Developer();
    virtual float calculateBonus(int value) override;
    virtual int calculateSalary(int value) override;
    virtual void show() override;
};


#endif //LAB2_DEVELOPER_H
