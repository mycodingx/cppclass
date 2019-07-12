#include <iostream>

using namespace std;

class Student{
public:
string name;
int roll_no;

void insert(int r, string n){
    roll_no = r;
    name = n;
}

void display(){
    cout<<roll_no<<" "<<name<<endl;
}
};

int main() {
    Student s1; //creating an object of Student
    Student s2; //creating an object of Student
    s1.insert(201, "Student One");
    s2.insert(202, "Student Two");
    s1.display();
    s2.display();
    return 0;
}