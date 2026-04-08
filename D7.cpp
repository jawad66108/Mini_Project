//// Maximum Subarray Sum (Burte force apporach)
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    // vector<int> arr={23,43,42,643,92,20,10,99};
//    int n=8;
//    int arr[n]={23,43,42,643,92,20,10,99};
//
//    for(int st=0;st<n;st++){
//        for(int end=st+1;end<n;end++){
//            for(int i=st;i<end;i++){
//                cout<<arr[i]<<",";
//            }
//            cout<<" ";
//        }
//        cout<<endl;
//    }
//
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    // vector<int> arr={23,43,42,643,92,20,10,99};
//    int n=8;
//    int arr[n]={23,43,42,643,92,20,10,99};
//	int maxsum = 0;
//    for(int st=0;st<n;st++){
//    	int cursum = 0;
//        for(int end=st+1;end<n;end++){
//            cursum += arr[end];
//			maxsum = max(maxsum , cursum); 
//        }
//    }
//    
//    cout<<"Max sum array is: "<<maxsum;
//
//}


// kadanes algorithm
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr = {23, 43, 42, 643, 92, 20, 10, 99};
	int maxsum =0 ,cursum=0;
    for(int x:arr){
    	cursum += x;
    	maxsum = max(maxsum , cursum);
    	if(cursum<0){
    		cursum =0 ;
		}
	}
	cout<<"Max sum is: "<<maxsum;
}


