#include "animal.h"
#include <string>
using namespace std;

animal::animal() {
    n = "";
    s = "";
    a = 0;
}

animal::animal(string name, string species, int age) {
    n = name;
    s = species;
    a = age;
}
animal::animal(const animal &E) {
    a = E.a;
    s = E.s;
    n    = E.n;
}
void animal::setName(string name) {
    n = name;
}
void animal::setSpecies(string species) {
    s = species;
}
void animal::setAge(int age) {
    a = age;
}
string animal::getName() {
    return n;
}
string animal::getSpecies() {
    return s;
}
int animal::getAge() {
    return a;
}
