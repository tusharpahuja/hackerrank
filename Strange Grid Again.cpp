#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long r,c,i,j,t;
cin>>r>>c;
if(r%2!=0){
    if(c==1){
        t = (r-1)/2;
        cout<<t*10;
    }
    else if(c==2){
        t = (r-1)/2;
        cout<<t*10+2;
    }
    else if(c==3){
        t = (r-1)/2;
        cout<<t*10+4;
    }
    else if(c==4){
        t = (r-1)/2;
        cout<<t*10+6;
    }
    else if(c==5){
        t = (r-1)/2;
        cout<<t*10+8;
    }
}
else{
    if(c==1){
        t = (r)/2-1;
        cout<<t*10+1;
    }
    else if(c==2){
        t = (r-1)/2;
        cout<<t*10+3;
    }
    else if(c==3){
        t = (r-1)/2;
        cout<<t*10+5;
    }
    else if(c==4){
        t = (r-1)/2;
        cout<<t*10+7;
    }
    else if(c==5){
        t = (r-1)/2;
        cout<<t*10+9;
    }
}
return 0;
}






