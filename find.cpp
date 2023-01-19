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

/* find() algorithm  */
void algo_ex11(){

vector<int>v1={21,4,4,6,7,7,121,53,110,11,19,20};
vector<int>::iterator it=find(v1.begin(),v1.end(),110);
if(it==v1.end())
    cout<<"element not found";
else 
    cout<<"element found at index"<<it-v1.begin();
}

int main(){
    /*
    finds the element in the given range of numbers.
    returns an iterator to the first element in the range [first,last) that compares equal to val.
    If no such elements is found, the function returns last.
    */ 
   algo_ex11();
    getch();
    return 0;
}