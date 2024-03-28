// Man.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Man {
private:
    string name;
    int age;
    char gender;
    double weight;

public:
    Man();
    Man(const string& name, int age, char gender, double weight);
    Man(const Man& other);
    ~Man();
    void setName(const string& name);
    void setAge(int age);
    void setGender(char gender);
    void setWeight(double weight);
    string getName() const;
    int getAge() const;
    char getGender() const;
    double getWeight() const;
    void Read();
    void Display() const;
    operator string() const;
    friend istream& operator>>(istream& in, Man& man);
    friend ostream& operator<<(ostream& out, const Man& man);
};
