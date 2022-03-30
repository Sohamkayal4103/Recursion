#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printName(ll count){
  if(count == 0){
    return;
  }
  cout<<"Soham" << endl;
  count--;
  printName(count);
}
int main(){
  ll n;
  cin >> n;
  printName(n);
  return 0;
}