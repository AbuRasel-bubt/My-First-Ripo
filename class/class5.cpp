#include<iostream>
using namespace std;

//AbstractClass
    class Abstractemployee{
        virtual void AskForpromotion() =0;
    };

class Employee:Abstractemployee{
    private:
    string Company;
    int Age;

    protected :
    string Name;
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

        void AskForpromotion(){
            if(Age>30)
            cout<< Name <<" Got Promoted "<<endl;
            else
                cout<< Name <<" Sorry No promotion for you! "<<endl;
        }
};

class Developer :public Employee{
    public :
        string FavprogrammingLanguage;
        Developer(string name, string comapnay, int age, string favprogrammingLanguage)
        : Employee( name, comapnay, age)
        
        {
            FavprogrammingLanguage = favprogrammingLanguage;
        }

        void FixBug(){
            cout<< Name <<" Fixed bug using "<<FavprogrammingLanguage<<endl;
        }

};

class Teacher : public Employee{
    public:
    string Subject ;


    Teacher(string name, string comapnay, int age, string subject)
    : Employee(name,comapnay, age)
    {
        Subject = subject;
    }

    void preparelesson(){
        cout<< Name << " is preparing "<< Subject << " lesson "<<endl;
    }

};



int main(){
    Employee employee1 = Employee("Rasel", "RFL", 25);
    Employee employee2 = Employee("Noman", "RFL", 35);

    Developer d= Developer("Mohammad Rasel ", " BUBT ", 25 , "C++" );
    d.FixBug();
    d.AskForpromotion();
    Teacher t= Teacher("Rasel","Ridway School", 40 , "English");

    t.preparelesson();
    t.AskForpromotion();

}