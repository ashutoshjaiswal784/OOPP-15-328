#include<iostream>
using namespace std;
class comp{
    int real,img;
    public:
     comp(int r=0,int i=0):real{r},img{i}{}
     void show(){
        cout<<real<<","<<img<<endl;
     }
};
int main(){
    comp C1(5,20);
    comp C2;
    C1.show();
    C2.show();
}