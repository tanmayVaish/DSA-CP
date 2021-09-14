
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      string res="";
      if(s.size() > 10){
        res+=s[0] + to_string((s.size()-2)) + s[s.size()-1];
      }
      else {
        cout<<s<<endl;
        continue;
      }
      cout<<res<<endl;
    }

    return 0;
}
