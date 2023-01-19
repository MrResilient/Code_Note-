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

/* equal() algorithm  */
void algo_ex14(){

vector<int>v1={1,2,3,4,5,6};
vector<int>v2={2,3,4};
vector<int>::iterator it;
if(equal(v2.begin(),v2.end(),v1.begin()+1))
  cout<<"equal";
else
  cout<<"not equal";
}

int main(){
    /*
    helps to compare the elements within the range[first_1,last_1) with those within range beginning at first_2.
    It returns boolean value.
    */ 
   algo_ex14();
    getch();
    return 0;
}