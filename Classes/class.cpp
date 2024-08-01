#include<iostream>
using namespace std;

class Franchise{
    public:
    void KFC(){
        cout<<"We have the best chiken"<<endl;
    }
    void Burgerking(){
        cout<<"We have the best burgers"<<endl;
    }
    
};

int main(){
    Franchise fran;
    fran.KFC();
    fran.Burgerking();
    return 0;
}
