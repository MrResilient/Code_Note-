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
#include<bits/stdc++.h>
using namespace std;

/* lower_bound() and upper_bound() algorithm  */
void algo_ex5(){
    /*
     returns pointer to "position of num" if container contains first occurrence of num.
     returns pointer to "first position of num" if container contains multiple occurrence of num.
     returns pointer to "position of next higher number than num" if container does not contain occurrence of num 
    */ 
vector<int>v1={1,4,4,6,7,7,21,53,112,117,119,200};
vector<int>::iterator it=lower_bound(v1.begin(),v1.end(),9);
cout<<"element just greater than or equal to 9 is at index: "<<it-v1.begin();
cout<<" \n and its value is "<<*it;
    /*
     returns pointer to "position of next higher number than num " if container contains first occurrence of num.
     returns pointer to "first position of next higher number than last occurrence of num" if container contains multiple occurrence of num.
     returns pointer to "position of next higher number than num" if container does not contain occurrence of num 
    */ 
vector<int>v2={1,4,4,6,7,7,21,53,112,117,119,200};
it=upper_bound(v2.begin(),v2.end(),7);
cout<<"element just greater than 7 is at index: "<<it-v2.begin();
cout<<"\n and its value is "<<*it;

}

int main(){
   
   algo_ex5();
    getch();
    return 0;
}