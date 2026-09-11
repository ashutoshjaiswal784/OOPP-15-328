#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int roll;
    float marks;
public:
    void input(){

        cout<<"Enter name:";
        cin>>name;
        cout<<"Roll no.";
        cin>>roll;
        cout<<"Enter marks:";
        cin>>marks;
    }
    void display(){

        cout<<"Students Details"<<endl;
        cout<<"Name-"<<name<<endl;

        cout<<"Roll-"<<roll<<endl;
        cout<<"Marks-"<<marks<<endl;
    }
};
int main(){
    Student s;
    s.input();
    s.display();

    return 0;
}