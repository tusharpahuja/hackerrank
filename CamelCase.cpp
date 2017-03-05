#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
string s;
long long len,i,c=1;
cin>>s;
len = strlen(s.c_str());
for(i=1;i<len;i++){
    if((s[i]<='Z')&&(s[i]>='A')){
        c++;
    }
}
cout<<c;
return 0;
}






