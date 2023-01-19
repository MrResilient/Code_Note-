#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

void sort_algo_ex4();

int main(){

    /* 
    create a vector containing string type values and sort them 
    */
    sort_algo_ex4();

}

void sort_algo_ex4(){
   vector<string>v={"virat","prerna","rahul","kapil","sonam","amir","arjun"};
   sort(v.begin(),v.end()); 
   for(auto x:v)
      cout<<" "<<x;
    cout<<endl;
    
}