// main.cpp
#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Man person1("John", 20, 'M', 70.5);
    Man person2;
    person2.Read();

    Student student1("Alice", 22, 'F', 55.0, 3);
    Student student2;
    student2.Read();

    cout << "Student 1 Info:" << endl;
    student1.Display();
    cout << endl;
    cout << "Student 2 Info:" << endl;
    student2.Display();

    vector<Man> people;
    people.push_back(person1);
    people.push_back(person2);
    people.push_back(student1);
    people.push_back(student2);

    cout << endl;
    cout << "People in vector:" << endl;
    for (const auto& person : people) {
        cout << person << endl;
    }

    return 0;
}