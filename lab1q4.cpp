#include<iostream>
using namespace std;
class Box{
    public:
    double length;
    double breadth;
    double height;

};
int main(){
Box box1;
Box box2;
box1.length=10;
box1.breadth=10;
box1.height=10;
box2.length=5;
box2.breadth=5;
box2.height=5;
int vol1=box1.length*box1.breadth*box1.height;
int vol2=box2.length*box2.breadth*box2.height;
cout<<"Volume of Box1: "<<vol1<<endl;
cout<<"Volume of Box2: "<<vol2;
}