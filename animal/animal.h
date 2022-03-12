#pragma once
#include <string>
using namespace std;

class animal{
public:
    animal();
    animal(string name, string species, int age);
    animal(const animal &E);
    void setName(string name);
    void setSpecies(string species);
    void setAge(int age);
    string getName();
    string getSpecies();
    int getAge();
private:
    string n, s;
    int a;
};
