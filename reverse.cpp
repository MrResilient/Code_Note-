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

/* reverse() algorithm  */
void algo_ex20(){

vector<int>v1={10,3,4,4,4,5,5,77};
reverse(v1.begin(),v1.end());
for(int num:v1)
    cout<<num<<" ";
cout<<endl;

}

int main(){
    /*
    It reverses the order of the elements in the range [first,last) of any container. 
    */ 
   algo_ex20();
    getch();
    return 0;
}