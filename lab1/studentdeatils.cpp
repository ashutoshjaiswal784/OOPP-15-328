#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
    string branch;
public:
    void input(){
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter roll";
        cin>>roll;
        cout<<"Enter branch";
        cin>>branch;

    }
    void show(){

        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;
        cout<<"Branch:"<<branch<<endl;
    }
};
int main(){
    Student s1,s2;
    cout<<"Enter detal of std 1";
    s1.input();
    cout<<"Enter details of std 2";
    s2.input();
    cout<<"Student 1 Details";
    s1.show();
    cout<<"Student 2 details";
    s2.show();

    return 0;
}