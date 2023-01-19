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

/* remove_if() algorithm  */
void algo_ex19(){

vector<int>v1={10,3,4,4,4,5,5,77,8,5,5,2};
vector<int>::iterator it,newEnd;
newEnd=remove_if(v1.begin(),v1.end(),[](int x)->bool{return x%2==0;});
for(int num:v1)
    cout<<num<<" ";
cout<<endl;
for(it = v1.begin();it!=newEnd;it++)
    cout<<*it<<" ";
}

int main(){
    /*
    remove_if() function is used to eliminate all the elements that satisfy a predicate from a given 
    range [first,last) without disturbing the order of the remaining elements.
    */ 
   algo_ex19();
    getch();
    return 0;
}