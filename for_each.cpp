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

/* for_each() algorithm  */
void algo_ex7(){

vector<int>v1={21,4,4,6,7,7,121,53,110,11,19,20};
for_each(v1.begin(),v1.end(),[](int x)->void {cout<< x-1 << " ";});
}

int main(){
    /*
    for_each is a function based on looping technique.
    This loop accepts a function which executes over each of the container elements.    
    */ 
   algo_ex7();
    getch();
    return 0;
}