#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//
// int gcd(int a, int b){
//   if(a==0) return b;
//   gcd(b%a, a);
// }

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // int a[5];
    // int sn1=0,sn2=0,sn3=0;
    // for(int i=0;i<5;i++) cin>>a[i];
    //
    // int n1[4];
    // for(int i=0;i<4;i++){
    //   n1[i] = a[4]/a[i];
    //   cout<<n1[i]<<" ";
    //   sn1 +=n1[i];
    // }
    // n1[3] = 5;
    // sn1++;
    //
    // cout<<endl;
    // cout<<sn1<<" ";
    // cout<<endl;
    //
    // int n2[6];
    // for(int i=0;i<3;i++){
    //   for(int j=i+1;j<4;j++){
    //     n2[j] = gcd(n1[j], n1[i]);
    //     cout<<n2[j]<<" ";
    //     sn2+=n2[j];
    //   }
    // }
    //
    // cout<<endl;
    // cout<<sn2<<" ";
    // cout<<endl;

    // int n3[4];
    // for(int i=0;i<2;i++){
    //   for(int j=i+1;j<3;j++){
    //     for(int k=j+1;k<4;k++){
    //       n3[k] = gcd(n1[i], gcd(n1[j], n1[k]));
    //       cout<<n3[k]<<" ";
    //       sn3+=n3[k];
    //     }
    //   }
    // }
    // cout<<endl;
    // cout<<sn3<<" "<<endl;
    // int sn4 = n1[0];
    // for(int i=1;i<4;i++){
    //   sn4 = gcd(sn4, n1[i]);
    // }
    // cout<<sn4;
    // cout<<endl;
    //
    //
    //
    // cout<<((sn1-sn2)+(sn3-sn4));

    int a[5];
    int sn1=0,sn2=0,sn3=0;
    for(int i=0;i<5;i++) cin>>a[i];

    for(int i=1;i<=a[4];i++){
      if(!(i%a[0]) || !(i%a[1]) || !(i%a[2]) || !(i%a[3])){
        sn1++;
      }
    }

    cout<<sn1;
    return 0;
}
