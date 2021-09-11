#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
  for(int i=2;i<n;i++)
    if(!(n%i)) return false;
  return true;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int a,b;
    cin>>a>>b;

    bool f = checkPrime(b);

    if(f && b>a){
      for(int i=a+1;i<b;i++){
        if(!(i%2)) continue;
        if(checkPrime(i)) {
          cout<<"NO";
          return 0;
        }
      }
    } else if(!f){
        cout<<"NO";
        return 0;
      }

      if(b>a && f) cout<<"YES";
      else cout<<"NO";

    return 0;
}
