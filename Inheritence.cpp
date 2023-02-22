/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
using std::string;


class AbstractEmployee // contract class //
{
    virtual void AskForPromotion() = 0;   // whatever the class signed to this contract should provide an implementation//
};

 class Employee: AbstractEmployee    // ssign the contract //
{
 private:          // encapsulated // 
  string company;     /* hidden within the class so nobody can dirctly interact with it */
  string position;  
  int age;     
  string city;  
 
 protected:   //protected is where only the derived class of this parent class can access//
  string name;  
  
  public:
   void setname(string Name) // setter
   {
       name = Name;  // remember this pattern//
   }
   string getname()  //getter
   {
       return name;
   }
   void setcompany(string Company)
   {
       company = Company;
   }
   string getcompany()
   {
       return company;
   }
   void setposition(string Position)
   {
       position = Position;
   }
   string getposition()
   {
       return position;
   }
   void setage(int Age)
   {
       if(Age >= 18)
       {
         age = Age;
       }
      
   }
   int getage()
   {
       return age;
   }
   void setcity(string City)
   {
       city = City;
   }
   string getcity()
   {
       return city;
   }
   
   
  void describeyourself()
  {
      cout<<"My name is "<<name<<endl;
      cout<<"My company name is "<<company<<endl;
      cout<<"My current position is "<<position<<endl;
      cout<<"I am "<<age<<" years old"<<endl;
      cout<<"I am from "<<city<<endl;
  }
  void AskForPromotion()  // implementation of the contract //
  {
      if(age > 30)
      {
          cout<<name<<" has recieved the promotion"<<endl;
      }
      else
      {
          cout<<name<<" sorry you have NOT recieved the promotion"<<endl;
      }
  }
  
    Employee(string Name, string Company, string Position, int Age, string City) //constructor //
    {
        name = Name;
        company = Company;
        position = Position;
        age = Age;
        city = City;
    }
  
};

class Developer: public Employee //This inheritence become private in default so we have to add public if have to add oyside trhe class//
{
    public:
    string language;
    Developer(string Name, string Company, string Position, int Age, string City, string Language)
        :Employee(Name, Company, Position, Age, City)
    {
        language = Language;
    }
    void FixBug()
    {
        cout<<name<<" fixes bugs in "<<language<<" language"<<endl;
    }
};
class Teacher :public Employee
{
    public: 
     string subject;
     Teacher(string Name, string Company, string Position, int Age, string City, string Subject)
      :Employee(Name, Company, Position, Age, City) 
      {
          subject = Subject;
      }
      
      void Lesson()
      {
          cout<<name<<" teaches "<<subject<<" at "<<getcompany()<<endl; // as company is private we have to use getters to access it//
      }
};
int main()
{
    /*Employee emp1 = Employee("Bilal", "Google", "Data Analyst", 20, "Negombo") ; //call constructor//
    emp1.describeyourself(); */
    
    Developer d = Developer("Bilal", "Google", "Data Analyst", 20, "Negombo", "C++");
    d.describeyourself();
    d.FixBug() ;
    d.AskForPromotion();
    cout<<endl;
    
    Teacher t = Teacher("Mr. John", "Sailan International School ", " Senior Executive", 32 , " Minuwangoda", "Information Technology");
    t.describeyourself();
    t.Lesson();
    t.AskForPromotion();
   // cout<<"Can these employees have promotion?"<<endl;
    //emp1.AskForPromotion(); // output of the contract //
    
}
