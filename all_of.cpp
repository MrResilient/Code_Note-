#include<iostream>
#include<conio.h>
#include<vector>
#include<queue>
#include<deque>
#include<array>
#include<list>
#include<string>
#include<numeric>
#include<algorithm>
#include<math.h>
using namespace std;

/* all_of() algorithm  */
void algo_ex2(){

vector<int>v1={10,20,14,50,18,6,12};
if(all_of(v1.begin(),v1.end(),[](int a)->int{return a%2 == 0;}))
  cout<<" all numbers are even ";
 else 
  cout<<"not all numbers are even";

}

int main(){
    /*
      This function operates on whole range of array elements and can save time to run a loop 
       to check each element one by one. It checks for a given property on every element and 
       returns true when each element in range satisfies specified property, else return false.
    */ 
   algo_ex2();
    getch();
    return 0;
}