//pow(x,n)
#include <iostream>
using namespace std;
int main(){
//add some case of x=1,-1,0 and n=binform=0
    double x=2;
    long binform=10;
    if(binform<0){
        x=1/x;
        binform=-(binform);
    }
    double ans=1;
    while(binform>0){
        if(binform%2==1){
            ans*=x;
        }x*=x;
        binform=binform/2;
    } 
    cout<<ans<<endl;
    
}
