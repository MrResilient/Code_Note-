#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

void sort_algo_ex5();

int main(){

    /* 
    create a vector containing employee type values, store some values and sort them ny their salaries
    */
    sort_algo_ex5();

}

void sort_algo_ex5(){
   class Employee{
    private:
     int emp_id;
     string e_name;
     float salary;
    
    public:
     Employee(){}
     Employee(int e, string n,float s): emp_id(e),e_name(n),salary(s){}
     void show_employee(){ cout<<emp_id<<" "<<e_name<<" "<<salary;}

       static bool compare_by_salary(Employee const &e1,Employee const &e2){
        return e1.salary<e2.salary;
       }

       static bool compare_by_name(Employee const &e1,Employee const &e2)
       {
        int c=e1.e_name.compare(e2.e_name);
        if(c<0)
            return true;
        else 
            return false;
       }
   };
    
    vector<Employee>v={
 
        Employee(5,"shivansh",800000),
        Employee(3,"shashank",600000),
        Employee(1,"shashwat",700000),
        Employee(2,"ravi",500000),
        Employee(4,"jay",400000),
 
    };

    sort(v.begin(),v.end(),Employee::compare_by_salary);
    for(Employee x:v){
      x.show_employee();
      cout<<endl;
    }
}