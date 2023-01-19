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

/* replace() algorithm  */
void algo_ex21(){

vector<int>v1={10,3,4,4,4,5,5,77};
replace(v1.begin(),v1.end(),4,63);
for(int num:v1)
    cout<<num<<" ";
cout<<endl;

}

int main(){
    /*
    Assigns new_value to all the elements in the range [first,last) for which pred returns true.
    */ 
   algo_ex21();
    getch();
    return 0;
}