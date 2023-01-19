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

/* adjacent_find() algorithm */
void algo_ex1(){
 vector<int>v1={10,4,4,13,7,7,21,15,11,11,11,20};
 int x=*adjacent_find(v1.begin(),v1.end());
 cout<<"pair found with element value= "<<x;

 vector<int>v2={10,4,13,7,21,15,11,20};
 vector<int>::iterator it = adjacent_find(v2.begin(),v2.end());
 if(it==v2.end())
    cout<<"\n No such pair found ";
}

int main(){
    /*
    Searches the range {first,last) for the first occurrence of two consecutive elements that match,
    and returns an iterator to the first of these two elements, or last if no such pair is found.}
    */
    algo_ex1(); 
    getch();
    return 0;
}