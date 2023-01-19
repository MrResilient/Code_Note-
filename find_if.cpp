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

/* find_if() algorithm  */
void algo_ex12(){

vector<int>v1={21,5,5,6,7,7,121,53,110,11,19,20};
vector<int>::iterator it=find_if(v1.begin(),v1.end(),[](int x)->bool{int k=(int)sqrt(x);cout<<k<<endl;
 return k*k==x;});
if(it==v1.end())
    cout<<"element not found";
else 
    cout<<"element "<<*it<<"found at index "<<it-v1.begin();
}

int main(){
    /*
    returns an iterator to the first element in the range [first,last) for which 
    pred(unary function) returns true
    */ 
   algo_ex12();
    getch();
    return 0;
}