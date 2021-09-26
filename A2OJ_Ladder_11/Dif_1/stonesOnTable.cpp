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
    int n;
    cin>>n;
    string s;
    cin>>s;

    int i,c=0;

    for(i=0;i<n-1;i++){
      if(s[i] == s[i+1]) c++;
    }
    cout<<c;
    return 0;
}
