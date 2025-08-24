#include<iostream>
using namespace std;

class circle{
    float radius;
    const float pi = 3.14;
    float area;
public:
    void read(int r){
        radius=r;
    }
    void calc(){
        area=pi*radius*radius;
    }
    void display(){
        cout<<"Radius: "<<radius<<endl;
        cout<<"Area of circle: "<<area<<endl;
    }
};

int main(){
    circle obj;
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    obj.read(r);
    obj.calc();
    obj.display();
    return 0;
}
