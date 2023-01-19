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

/* generate_n() algorithm  */
void algo_ex10(){
    /*
    it returns number of occurrences of an element in a given range
    */
vector<int>v1={21,4,4,6,7,7,121,53,110,11,19,20};
cout<<count(v1.begin(),v1.end(),4)<<endl;
    /*
    it is used to get the number of elements in a specified range which satisfy a condition .
    */
cout << count_if(v1.begin(),v1.end(),[](int x)->bool{return x>15;});
}

int main(){
     
   algo_ex10();
    getch();
    return 0;
}