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

/* remove() algorithm  */
void algo_ex18(){

vector<int>v1={11,2,5,11,18,25};
vector<int>::iterator it,newEnd;
newEnd=remove(v1.begin(),v1.end(),11);
for(int num:v1)
    cout<<num<<" ";
cout<<endl;
for(it = v1.begin();it!=newEnd;it++)
    cout<<*it<<" ";
}

int main(){
    /*
    It remove values from range.
    Transforms the range [first,last) into a range with all the elements that compare equal to val
    removed,
    and returns an iterator to the new end of that range. 
    */ 
   algo_ex18();
    getch();
    return 0;
}