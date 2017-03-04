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
int n,i,l,s=0,k=0;
cin>>n;
string a,b;
cin>>a;
l = strlen(a.c_str());
while(s<l){
    b = a.substr(s,3).c_str();
    if(strcmp(b.c_str(),"010")==0){
        a[s+2] = '1';
        k++;
        s += 3;
    }
    else{
        s++;
    }
}
cout<<k;
return 0;
}






