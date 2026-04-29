#include <iostream>
#include<climits>
//kadane algorithm
using namespace std;
int main(){
    int MaxSum=INT_MIN;
    int CurSum=0;
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        CurSum+=arr[i];
        MaxSum=max(CurSum,MaxSum);
        if(CurSum<0){
            CurSum=0;
        }
    }cout<<MaxSum<<endl;;
}