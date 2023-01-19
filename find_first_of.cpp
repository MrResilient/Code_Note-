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

/* find_first_of() algorithm  */
void algo_ex13(){

vector<int>v1={21,5,5,6,7,7,121,53,110,11,19,20};
vector<int>v2={80,71,50,35,18,63,121,5};
vector<int>::iterator it;
it=find_first_of(v1.begin(),v1.end(),v2.begin(),v2.end());
cout<<*it;
}

int main(){
    /*
    It is used to compare elements between two containers.
    It compares all the elements in a range[first1,last1) with the elements in the range [first2,last2)
    and if any of the elements present in the second range is found in the first one,
    then it returns an iterator to that element.
    If there are more than one element common in both the ranges,
    then an iterator to the first common element present in the first container is returned.
    In case there is no match, then iterator pointing to last1 is returned.

    */ 
   algo_ex13();
    getch();
    return 0;
}