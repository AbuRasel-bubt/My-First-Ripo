#include<iostream>
using namespace std;

class Employee{
    private:
    string Name;
    string Company;
    int Age;

    public:
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            if(age>=18)
            Age = age;
        }
        int getAge(){
            return Age;
        }
        void introduceYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company -"<<Company<<endl;
            cout<<"Age -"<<Age<<endl;
        }
        Employee(string name, string comapnay, int age){
            Name = name;
            Company = comapnay;
            Age = age;
        }
};



int main(){
    Employee employee1 = Employee("Rasel", "RFL", 25);


    employee1.setAge(10);
    std:: cout<< employee1.getName() << " is " << employee1.getAge() << " Years old ";
    

}