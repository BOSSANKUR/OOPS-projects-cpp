#include <iostream>
using namespace std;

// Base Class
class Student {
protected:
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void showData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class
class Marks : public Student {
private:
    int cppMarks, htmlMarks;
public:
    void setMarks(int c, int h) {
        cppMarks = c;
        htmlMarks = h;
    }
    void showResult() {
        cout << "C++ Marks: " << cppMarks << ", HTML Marks: " << htmlMarks << endl;
        cout << "Average: " << (cppMarks + htmlMarks) / 2.0 << endl;
    }
};

int main() {
    Marks m1;
    m1.setData("Ankur", 20);
    m1.setMarks(90, 85);

    cout << "===== Student Report =====" << endl;
    m1.showData();
    m1.showResult();

    return 0;
}
