//
// Created by WronM on 09.10.2024.
//

#ifndef LAB2_TEAMLEADER_H
#define LAB2_TEAMLEADER_H

#include "Employee.h"
#include <iostream>

class TeamLeader: public Employee {
public:
    TeamLeader(string surname1, int age1, int experience1, int salary1);
    TeamLeader();
    virtual float calculateBonus(int value) override;
    virtual void show();
    virtual int calculateSalary(int value) override;
};


#endif //LAB2_TEAMLEADER_H
