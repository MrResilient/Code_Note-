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

/* fill() algorithm  */
void algo_ex16(){

vector<int>v1={10,10,20,30,30,40,40,40,50,60,70,70,70,80};
fill(v1.begin()+1,v1.begin()+5,100);
for(int num:v1)
    cout<<num<<" ";
}

int main(){
    /*
   The "fill" function assigns the value 'val' to all the elements in the range [begin,end),
   where 'begin' is the initial position and 'end' is the last position.
   Notice carefully that 'begin' is included in the range but 'end' is NOT included.
    */ 
   algo_ex16();
    getch();
    return 0;
}