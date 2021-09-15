
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
    unordered_set<char> set;

    for(int i=0;i<s.size();i++){
      set.insert(s[i]);
    }
    if(!(set.size()%2)) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
