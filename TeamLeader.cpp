//
// Created by WronM on 09.10.2024.
//

#include "TeamLeader.h"
#include <iostream>

using namespace std;

TeamLeader::TeamLeader(string surname1, int age1, int experience1, int salary1) : Employee(surname1, age1, experience1,
                                                                                           salary1) {

}

TeamLeader::TeamLeader() {

}

float TeamLeader::calculateBonus(int value) {
    return value*(1+getSalary()+getExperience());
}

void TeamLeader::show() {
    cout<<"Jestem Team Leader z "<<getExperience()<<"letnim doswiadczeniem"<<endl;
}

int TeamLeader::calculateSalary(int value) {
    return (int)calculateBonus(value) + getSalary();
}
