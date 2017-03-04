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
int t,i,l,c;
string a;
cin>>t;
while(t--){
    cin>>a;
    c=0;
    l = strlen(a.c_str());
    for(i=0;i<l-1;i++){
        if(a[i]!='0'){
            if(a[i]==a[i+1]){
                a[i]='0';
                c++;
            }
        }
    }
    cout<<c<<endl;
}
return 0;
}






