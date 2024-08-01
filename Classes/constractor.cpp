#include<iostream>
using namespace std;


class wall{
    private:
    double length;
    double height;

    public:
    wall(double len, double hei){
        length = len;
        height = hei;
    }
    double calculateArea(){
        return length * height;
    }
};

int main(){
    wall wall1(25.5,25.5);
    cout<<wall1.calculateArea();
}