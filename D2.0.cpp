#include <iostream>
using namespace std;

void BS(int arr[],int n,int tag){
  int st=0,end=n-1;
  
  while(st<=end){
    int mid=(st+end)/2;
    if(tag==arr[mid]){
      cout<<"found at index: "<<mid;
      return;
    }
    if(tag>mid){
      st=mid+1;
    }else{
      end=mid-1;
    }
  }
}

int main() 
{
    int n=5,tag=55;
    int arr[n]={23,34,55,67,89};
    
    BS(arr,n,tag);
}

