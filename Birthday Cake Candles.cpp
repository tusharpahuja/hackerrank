#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

//#define long long int ll
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
long long n,i,c=1,t;
cin>>n;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
t=a[n-1];
for(i=n-2;i>=0;i--){
    if(a[i]!=t){
        break;
    }
    else{
        c++;
    }
}
cout<<c;
return 0;
}






