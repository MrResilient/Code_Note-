#include<iostream>
#include<conio.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<string>
#include<algorithm>
using namespace std;

void sort_algo_ex6(){

    deque<int>l1;
    
    l1.push_back(30);
    l1.push_back(50);
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(40);
    
    sort(l1.begin(),l1.end());
    for(int x:l1)
      cout<<" "<<x;
    cout<<endl;
    
}

int main(){

    sort_algo_ex6();

    getch();
    return 0;
}