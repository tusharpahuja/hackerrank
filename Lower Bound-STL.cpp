#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,q,i,it,a;
    cin>>n;
    vector<long long> v;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>a;
        it = lower_bound(v.begin(),v.end(),a) - v.begin();
        if(v[it]==a){
            cout<<"Yes"<<" "<<it+1<<endl;
        }
        else{
            cout<<"No"<<" "<<it+1<<endl;
        }
    }
    return 0;
}
