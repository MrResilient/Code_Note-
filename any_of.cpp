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

/* any_of() algorithm  */
void algo_ex3(){

vector<int>v1={10,20,14,50,18,6,12};
if(any_of(v1.begin(),v1.end(),[](int a)->int{return a%2 == 1;}))
  cout<<" at least one number is odd ";
 else 
  cout<<"all numbers are even";

}

int main(){
    /*
     returns true if pred returns true for any of the elements int eh range [first,last), and false
     otherwise }
    */ 
   algo_ex3();
    getch();
    return 0;
}