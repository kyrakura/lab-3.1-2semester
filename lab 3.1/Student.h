// Student.h
#pragma once
#include "Man.h"

class Student : public Man {
private:
    int course;

public:
    Student();
    Student(const string& name, int age, char gender, double weight, int course);
    Student(const Student& other);
    ~Student();
    void setCourse(int course);
    int getCourse() const;
    void Read();
    void Display() const;
    operator string() const;
    friend istream& operator>>(istream& in, Student& student);
    friend ostream& operator<<(ostream& out, const Student& student);
};