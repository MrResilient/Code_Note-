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
// #include<pair>
#include<bits/stdc++.h>
using namespace std;

/* equal_range() algorithm  */
void algo_ex15(){

vector<int>v1={10,10,20,30,30,40,40,40,50,60,70,70,70,80};
pair<vector<int>::iterator,vector<int>::iterator>p;
p=equal_range(v1.begin(),v1.end(),40);
cout<<"40 is present in sorted vector from index "<<(p.first-v1.begin())<<" till "<< (p.second-v1.begin());

}

int main(){
    /*
    It is used to find the sub-range within a given range[firs,last) that has all
    the elements equivalent to a given value.
    It returns the intial and the final bound of such a sub-range.
    This function requires the range to be either sorted or partitioned according 
    to some condition such that all the elements for which the condition evaluates 
    to true are to the left of the given value and rest all are
    to its right.
    */ 
   algo_ex15();
    getch();
    return 0;
}