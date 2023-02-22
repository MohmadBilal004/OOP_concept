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
 private: // encapsulated // 
  string name;    /* hidden within the class so nobody can dirctly interact with it */
  string company;   
  string position;  
  int age;     
  string city;  
  
  
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
int main()
{
    Employee emp1 = Employee("Bilal", "Google", "Data Analyst", 20, "Negombo") ; //call constructor//
    emp1.describeyourself();
    cout<<endl;
    Employee emp2 = Employee("Amigo", "Amazon", "Software Engineer", 30, "Colombo") ;
    emp2.describeyourself();
    cout<<endl;
    
    emp1.setage(26);
    emp2.setage(36);
    cout<<emp1.getname()<<" is "<<emp1.getage()<<" years old now"<<endl;
    cout<<emp2.getname()<<" is "<<emp2.getage()<<" years old now"<<endl;
    cout<<endl;
    
    cout<<"Can these employees have promotion?"<<endl;
    emp1.AskForPromotion(); // output of the contract //
    emp2.AskForPromotion();
    return 0;
}
