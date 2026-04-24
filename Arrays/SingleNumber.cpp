#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[5]={2,3,4,2,4};
    int i,sum=0;
    for(i=0;i<5;i++){
        sum^=arr[i];

    }
    cout<<sum<<endl;

}
