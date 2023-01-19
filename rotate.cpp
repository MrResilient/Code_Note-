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

/* rotate() algorithm  */
void algo_ex23(){

vector<int>v1={10,3,4,4,4,5,5,77};
rotate(v1.begin(),v1.begin()+4,v1.end());
for(int num:v1)
    cout<<num<<" ";
cout<<endl;

}

int main(){
    /*
    It rotates the order of the elements in the range [first,last), in such a way that the element pointed
    by middle becomes the new first element.
    */ 
   algo_ex23();
    getch();
    return 0;
}