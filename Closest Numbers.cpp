#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<cctype>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
long long n,i,dm=1e9;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n-1;i++){
    if(abs(a[i]-a[i+1]) < dm){
        dm = abs(a[i]-a[i+1]);
    }
}
for(i=0;i<n-1;i++){
    if(abs(a[i]-a[i+1])==dm){
        cout<<a[i]<<" "<<a[i+1]<<" ";
    }
}
return 0;
}






