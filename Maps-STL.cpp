#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long q,i,typ,y;
    cin>>q;
    string x;
    map<string,long long> m;
    for(i=0;i<q;i++){
        cin>>typ;
        if(typ==1){
            cin>>x>>y;
            m[x]+=y;
        }
        else if(typ==2){
            cin>>x;
            m[x]=0;
        }
        else{
            cin>>x;
            cout<<m[x]<<endl;
        }
    }
    return 0;
}
