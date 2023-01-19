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
void algo_ex9(){

vector<int>v1(10);
generate_n(v1.begin(),5,[]()->int{static int i;++i;return i*i;});
generate_n(v1.begin()+5,5,[]()->int{static int j;++j;return j*j*j;});
for(int num:v1)
    cout<<num<<" ";
}

int main(){
    /*
    there can be a scenario, where we want to assign values only to 
    the first n elements, for that we have another STL algorithm std::generate_n
    */ 
   algo_ex9();
    getch();
    return 0;
}