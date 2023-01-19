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

/* is_sorted() algorithm  */
void algo_ex26(){

vector<int>v1={11,34,22,25,33,33,33,55,88};
if(is_sorted(v1.begin(),v1.end()))
    cout<<"yes vector is sorted";
else
    cout<<"no, vector is not sorted";

}

int main(){
    /*
   It checks if the elements in range [first,last) are sorted in ascneding order.
   */ 
   algo_ex26();
    getch();
    return 0;
}