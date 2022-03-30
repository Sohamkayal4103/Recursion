//printing 1 to n using backtracking
// Language: cpp
// Path: printNumbacktracking.cpp
// Compare this snippet from printName.cpp:
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printNumbacktracking(ll count){
  if(count == 0){
    return;
  }
  printNumbacktracking(count-1);
  cout<< count << endl;
}

void printNumbacktrackingReverse(ll count){
  if(count == count+1){
    return;
  }
  printNumbacktracking(count+1);
  cout<< count << endl;
}

int main(){
  ll n;
  cin >> n;
  printNumbacktracking(n);

  cout << "In reverse order" << endl;
  cout << endl;
  
  printNumbacktrackingReverse(n);
  return 0;
}