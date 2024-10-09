#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"

void whoWorkMoreThan5Years(Employee** employees, int size);
int howManyEarnLessThanMeanBonus(Employee** employees, int size);

int main() {
    Employee* employees[3];
    employees[0] = new Developer("Kowalski", 30, 6, 5000);
    employees[1] = new Developer("Nowak", 40, 3, 6000);
    employees[2] = new Developer("Szpak", 35, 8, 5500);

    whoWorkMoreThan5Years(employees, 3);
    cout<<howManyEarnLessThanMeanBonus(employees, 3)<<endl;
    return 0;
}

void whoWorkMoreThan5Years(Employee** employees, int size) {
    for (int i=0;i<size;i++) {
        if (employees[i]->getExperience() > 5) {
            employees[i]->show();
        }
    }
}

int howManyEarnLessThanMeanBonus(Employee** employees, int size) {
    if(size==0) return 0;
    float srednia = 0;
    int odpowiedz;
    for(int i=0;i<size;i++){
        srednia += (float)employees[i]->calculateBonus(1);
    }
    srednia = srednia / size;
    for(int i=0;i<size;i++){
        if((float)employees[i]->calculateBonus(1) > srednia){
            odpowiedz++;
        }
    }
    return odpowiedz;
}