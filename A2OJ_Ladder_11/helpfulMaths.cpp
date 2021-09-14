
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
    vector<string> v;
    string prev="";

    for(int i=0;i<s.size();i++){
      if(s[i] == '+'){
        v.push_back(prev);
        prev = "";
        continue;
      }
      prev+=s[i];
    }
    v.push_back(prev);
    sort(v.begin(),v.end());
    s = "";
    for(int i=0;i<v.size()-1;i++){
      s+=v[i]+"+";
    }
    s+=v.back();

    cout<<s;

    return 0;
}
