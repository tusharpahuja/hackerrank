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
string s,b;
int l,i,t=0,c=0;
cin>>s;
l = strlen(s.c_str());
while(t<l){
    b = s.substr(t,3).c_str();
    if(b[0]!='S') c++;
    if(b[1]!='O') c++;
    if(b[2]!='S') c++;
    t += 3;
}
cout<<c;
return 0;
}






