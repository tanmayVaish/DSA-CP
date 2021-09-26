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

    int a[3][3];
    int res[3][3];

    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cin>>a[i][j];
        res[i][j] = 1;
      }
    }

    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(a[i][j]%2 == 1 || a[i][j] == 1){
          res[i][j]=!res[i][j];
          if((i+1) <= 2) res[i+1][j]=!res[i+1][j];
          if((j+1) <= 2) res[i][j+1]=!res[i][j+1];
          if((i-1) >= 0) res[i-1][j]=!res[i-1][j];
          if((j-1) >= 0) res[i][j-1]=!res[i][j-1];
        }
        else if(a[i][j]%2 == 0 || a[i][j] == 0) continue;
      }
    }

    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cout<<res[i][j];
      }
      cout<<endl;
    }


    return 0;
}
