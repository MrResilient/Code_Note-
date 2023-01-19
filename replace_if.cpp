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

/* replace_if() algorithm  */
void algo_ex22(){

vector<int>v1={10,3,4,4,4,5,5,77};
replace_if(v1.begin(),v1.end(),[](int x)->bool{return x>5;},0);
for(int num:v1)
    cout<<num<<" ";
cout<<endl;

}

int main(){
    /*
    Assigns new_value to all the elements in the range [first,last) for which pred returns true.
    */ 
   algo_ex22();
    getch();
    return 0;
}