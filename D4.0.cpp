#include <iostream>
using namespace std;

int main() 
{
    int arr[5]={1,2,3,4,5};
    int tag=7;
    
    for(int i=0;i<5;i++){
      for(int j=i;j<5;j++){
        int sum = arr[i]+arr[j];
        if(sum == tag){
          cout<<"Sum found on index: "<<arr[i]<<" "<<arr[j]<<endl;
          break;
        }
        else{
          sum=0;
        }
      }
    }
}