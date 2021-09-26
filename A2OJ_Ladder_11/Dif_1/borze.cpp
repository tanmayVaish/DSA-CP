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
    int t;
    cin>>t;

    while(t--){


    string a;
    cin>>a;
    string curr="";
    int n = a.size();

    if(n==1) {
      cout<<'0'<<endl;
      continue;
    }

    for(int i=1;i<n;i++){
      if(a[i-1] == '-' && a[i] == '.'){
        curr+='1';
        i++;
      }
      else if(a[i-1]=='-' && a[i]=='-'){
        curr+='2';
        i++;
      }
      else if(a[i-1] == '.' && a[i] == '.'){
        curr+='0';
      }
      else if(a[i-1] == '.' && a[i] == '-'){
        curr+='0';
      }
    }
    //

    if(a[n-3] == '-' && a[n-2] == '-' && a[n-1] == '.' ) curr+='0';
    if(a[n-1] == '.' && a[n-2] == '.') curr+='0';
    cout<<curr<<endl;
}

    return 0;
}
