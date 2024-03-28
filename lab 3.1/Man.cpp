// Man.cpp
#include "Man.h"

Man::Man() : name(""), age(0), gender(' '), weight(0.0) {}

Man::Man(const string& name, int age, char gender, double weight)
    : name(name), age(age), gender(gender), weight(weight) {}

Man::Man(const Man& other)
    : name(other.name), age(other.age), gender(other.gender), weight(other.weight) {}

Man::~Man() {}

void Man::setName(const string& name) {
    this->name = name;
}

void Man::setAge(int age) {
    this->age = age;
}

void Man::setGender(char gender) {
    this->gender = gender;
}

void Man::setWeight(double weight) {
    this->weight = weight;
}

string Man::getName() const {
    return name;
}

int Man::getAge() const {
    return age;
}

char Man::getGender() const {
    return gender;
}

double Man::getWeight() const {
    return weight;
}

void Man::Read() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter weight: ";
    cin >> weight;
}

void Man::Display() const {
    cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << ", Weight: " << weight << endl;
}

istream& operator>>(istream& in, Man& man) {
    in >> man.name >> man.age >> man.gender >> man.weight;
    return in;
}

ostream& operator<<(ostream& out, const Man& man) {
    out << "Name: " << man.name << ", Age: " << man.age << ", Gender: " << man.gender << ", Weight: " << man.weight;
    return out;
}

Man::operator string() const {
    return "Name: " + name + ", Age: " + to_string(age) + ", Gender: " + gender + ", Weight: " + to_string(weight);
}