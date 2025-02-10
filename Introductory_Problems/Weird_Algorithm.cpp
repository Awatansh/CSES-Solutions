#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n;cin>>n;
  while(true){
    if(n==1){cout<<n;break;}
    cout<<n<<" ";
    if(n%2){
      //odd
      n=n*3+1;
    }
    else{
      n=n/2;
    }
  }
}