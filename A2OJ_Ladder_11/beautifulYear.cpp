#include <bits/stdc++.h>
using namespace std;

bool checker(int a){
  int i,j;
  string b = to_string(a);
  int n = b.size();
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i!=j){
        if(b[i]==b[j]) return true;
      }
    }
  }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int a;
    cin>>a;
    bool f;
    while(!f){
      a++;
      if(!checker(a)) {
        cout<<a;
        return 0;
      }
    }



    return 0;
}
