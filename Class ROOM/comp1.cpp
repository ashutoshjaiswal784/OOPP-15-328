#include<iostream>
using namespace std;
class comp{
    int real,img;
public:
  comp(int r, int i) : real(r), img(i) {}

  comp operator + (comp c){
    return comp(this->real+c.real,this->img+c.img);

  }
  void show(){
    cout << real << "+" << img << "i" ;
  }
};
 int main(){
    comp c1(5,20);
    comp c2(15,9);
    c1.show();
    c2.show();
 }