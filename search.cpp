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

/* search() algorithm  */
void algo_ex24(){

vector<int>v1={11,44,22,77,33,99,66,55,88};
vector<int>v2={99,66,55};
vector<int>::iterator it;
it=search(v1.begin(),v1.end(),v2.begin(),v2.end());
if(it!=v1.end())
  cout<<"subsequence found at index "<< it - v1.begin();
else 
  cout<<"subsequence not found ";

}

int main(){
    /*
    It searches the sequence [first1,last1) for the first occurrnece of the subsequence defined by
    [first2,last2) ,
    and returns an iterator to its first element of the ocurrence, or last1 if no occurrnec are found
    */ 
   algo_ex24();
    getch();
    return 0;
}