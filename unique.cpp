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

/* unique() algorithm  */
void algo_ex25(){

vector<int>v1={11,44,22,77,77,33,99,66,55,88};
vector<int>::iterator it,newEnd;
newEnd=unique(v1.begin(),v1.end());
for(int num:v1)
  cout<<num<<" ";
  cout<<endl;
  for(it=v1.begin();it!=newEnd;it++)
     cout<<*it<<" ";

}

int main(){
    /*
   It does not delete all the duplicate elements, but it removes duplicacy by just replacing those
   elements
   by next element present  in the sequence which is not duplicate to the current element being 
   replaced. All the elements which are replaced are left in a unspecified state.

   Another interesting feature of this function is that it does not changes the size of the container 
   after
   deleting the elements, it just returns a pointer pointing to the new end of the container
    */ 
   algo_ex25();
    getch();
    return 0;
}