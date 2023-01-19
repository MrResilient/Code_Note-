#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

void sort_algo_ex3();

int main(){

    /* 
    create a vector containing int type values and sort them 
    */
    sort_algo_ex3();

}

void sort_algo_ex3(){
   vector<int>v={50,10,40,90,80,30,100,60,20,70};
   sort(v.begin(),v.end()); //ascending order
    for(auto x:v)
      cout<<" "<<x;
    cout<<endl;
    
   sort(v.begin(),v.end(),greater<int>());  //descending order
    for(auto x:v)
      cout<<" "<<x;
    cout<<endl;
}