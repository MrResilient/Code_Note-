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

/* is_sorted_until() algorithm  */
void algo_ex27(){

vector<int>v1={11,14,22,77,33,33,33,55,88};
vector<int>::iterator it;
it=is_sorted_until(v1.begin(),v1.end());
cout<< *it << endl;
cout<< " number of sorted elements until the first unsorted one is "<<it-v1.begin();

}

int main(){
    /*
   It is used to find out the first unsorted element in the range[first,last)
   it returns an iterator to the first unsorted element in the range, so all the elements in between 
   first and the iterator returned are sorted.
   */ 
   algo_ex27();
    getch();
    return 0;
}