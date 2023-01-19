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

/* binary_search() algorithm  */
void algo_ex4(){

vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
if(binary_search(v1.begin(),v1.end(),10))
  cout<<" elements found ";
 else 
  cout<<"element not found";

}

int main(){
    /*
        This searching only works when container is sorted.
        This function returns boolean true if the element is present in the container, else returns false.
    */ 
   algo_ex4();
    getch();
    return 0;
}