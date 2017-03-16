#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){

    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}


int main(){
long long t,i,l,b;
cin>>t;
while(t--){
    cin>>l>>b;
    cout<<(l/gcd(l,b))*(b/gcd(l,b))<<endl;
}

return 0;
}
