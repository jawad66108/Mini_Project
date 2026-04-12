#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int nums[6]={-1,0,0,1,0,0};
	for(int i=0;i<6;i++){
            for(int j=i;j<6;j++){
                for(int k=j;k<6;k++){
                    if(nums [i] + nums[j] + nums[k] == 0){
                        cout<<"It goes to zero";
                        return 0;
                    }else{
                        cout<<"It's not";
                        return 0;
                    }
                }
            }
        }
    };
    
