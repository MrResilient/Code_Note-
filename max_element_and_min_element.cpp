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

/* max_element() and min_element() algorithm  */
void algo_ex6(){

vector<int>v1={21,4,4,6,7,7,121,53,110,11,19,20};
cout<<"max element is "<<*max_element(v1.begin(),v1.end());
cout<<"\n Min elements is "<<*min_element(v1.begin(),v1.end());

}

int main(){
    /*
    max_element() returns an iterator pointing to the element with the largest value in the range [first,last) 
    min_element() returns an iterator pointing to the element with the smallest value in the range [first,last)    
    */ 
   algo_ex6();
    getch();
    return 0;
}