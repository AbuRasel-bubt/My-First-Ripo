#include<iostream>
using namespace std;

class company{
    private:
    double FerMonth;
    public:
    void setSalary(double Fer){
        FerMonth = Fer;
    }
    double getSalary(){
        return FerMonth;
    }
};

int main(){
    company salary;
    salary.setSalary(12000);
    cout<<salary.getSalary();
    return 0;
}