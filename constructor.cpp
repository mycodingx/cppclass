#include <iostream>
using namespace std;

class Student{
public:
    int roll_no;
    string name;

    Student(int r, string n){
        roll_no = r;
        name = n;
    }

    void display(){
        cout<<roll_no<<" "<<name<<endl;
    }
};

int main(){
    Student s1 = Student(101,"Student One");
    Student s2 = Student(102,"Student Two");
    s1.display();
    s2.display();
    return 0;
}