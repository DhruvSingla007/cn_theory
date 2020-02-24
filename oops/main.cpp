#include <bits/stdc++.h>
using namespace std;


//class Student {
//    char *name;
//
//public:
//    int age;
//    int rollNo;
//    const int id;
//
////    // Default Constructor
////    Student() {
////        cout<<"Default Constructor called"<<endl;
////    }
////
////    Student(int rollNo){
////        this->rollNo = rollNo;
////    }
//
//    Student(int age, char *name, int id) : id(id) {
//        this->age = age;
////        // Shallow copy   // !avoid!
////        this->name = name;
//
//          // Deep Copy
//          this->name = new char[strlen(name) + 1];
//          strcpy(this->name,name);
//
//    }
//
//    void display() {
//        cout << name << " " << age <<" "<<id<<endl;
//    }
//};
//
//
//int main() {
////
////    // Create objects statically
////    Student s1;
////    Student s2;
////
////    s1.age = 24;
////    s1.rollNo = 101;
////
////    cout<<s1.rollNo<<endl;
////    cout<<s1.age<<endl;
////
////    // Create objects dynamically
////
////    Student* s3 = new Student(5);
////    (*s3).age = 45;
////    // or
////    s3->age = 45;
////
////    cout<<s3->rollNo;
//    char name[] = "Dhurv";
//    Student s1(19, name,1);
//
//    s1.display();
//
//    name[0] = 'S';
//    Student s2(19, name,2);
//
//    s2.display();
//
//    s1.display();
//
//    return 0;
//}


// ===================================================================
// static members

class Student {
public:
    int rollNumber;
    int age;

    static int totalStudents;

    Student(){
        totalStudents++;
    }
};

int Student :: totalStudents = 0;

int main(){

    Student s1;
    cout<<s1.totalStudents<<endl;

    Student s2;
    cout<<s2.totalStudents<<endl;

    Student s3;
    cout<<s1.totalStudents<<endl;

    Student s4;
    cout<<s2.totalStudents<<endl;

}
