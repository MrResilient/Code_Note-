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

/* generate() algorithm  */
void algo_ex8(){

vector<int>v1(10);
generate(v1.begin(),v1.end(),[]()->int{static int i;++i;return i*i;});
for(int num:v1)
    cout<<num<<" ";
}

int main(){
    /*
    It is used to generate numbers based upon a generator function, and then,
    It assigns those values to the elements in the container in the range[first,last).
    the generator function has to be defined by the user, and 
    it is called successively for assigning he numbers.    
    */ 
   algo_ex8();
    getch();
    return 0;
}