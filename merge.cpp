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

/* merge() algorithm  */
void algo_ex17(){

vector<int>v1={10,20,30,40};
vector<int>v2={2,5,11,18,25};
vector<int>v3(9);
merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
for(int num:v3)
    cout<<num<<" ";
}

int main(){
    /*
     combines the elements in the sorted ranges [first1,last1) and [first2,last2),
     into a new range beginning at result with all its elements sorted.
    */ 
   algo_ex17();
    getch();
    return 0;
}