// Student.cpp
#include "Student.h"

Student::Student() : Man(), course(0) {}

Student::Student(const string& name, int age, char gender, double weight, int course)
    : Man(name, age, gender, weight), course(course) {}

Student::Student(const Student& other)
    : Man(other), course(other.course) {}

Student::~Student() {}

void Student::setCourse(int course) {
    this->course = course;
}

int Student::getCourse() const {
    return course;
}

void Student::Read() {
    Man::Read();
    cout << "Enter course: ";
    cin >> course;
}

void Student::Display() const {
    Man::Display();
    cout << "Course: " << course << endl;
}

istream& operator>>(istream& in, Student& student) {
    in >> static_cast<Man&>(student) >> student.course;
    return in;
}

ostream& operator<<(ostream& out, const Student& student) {
    out << static_cast<const Man&>(student) << endl;
    out << "Course: " << student.course << endl;
    return out;
}

Student::operator string() const {
    return static_cast<string>(static_cast<const Man&>(*this)) + "\nCourse: " + to_string(course);
}
