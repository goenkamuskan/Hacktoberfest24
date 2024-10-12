#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[]={1,2,3,4,-1,-4,-6,5,7};
  int maxSum=INT_MIN;
  int currSum=0;
  
  int size=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
     currSum+=arr[i];
     maxSum=max(currSum,maxSum);
     if(currSum<0){
      currSum=0;
     }
  }
  cout<<maxSum<<endl;
}
