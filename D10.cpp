#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int nums [n]={1,2,3,4,5,6,3};
	int tag=3;
        for(int i=0;i<n;i++){
            if(nums[i] == tag){
                continue;
            }else{
                cout<<nums[i]<<" ";
            }
        }
    }

