#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int temp;
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++){
      if(s[i] >= 65 && s[i] <= 90){
        c1++;
      }
      else c2++;
    }
    if(c1>c2){
      for(int i=0;i<s.size();i++){
        if(s[i] >= 65 && s[i] <= 90) continue;
        s[i]-=32;
      }
    }

    else if(c1<=c2){
      for(int i=0;i<s.size();i++){
        if(s[i] >= 97 && s[i] <= 122) continue;
        s[i]+=32;
      }
    }

    cout<<s;

    return 0;
}
