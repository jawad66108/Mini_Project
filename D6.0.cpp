//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//int arr[11] = {2, -3, 5, -1, 6, -4, 2, -1, 7, -5, 2};	
//	int maxsum=0 ;
//	for(int st=0 ; st<11 ; st++){
//		int currsum=0;
//		for(int end=st ; end<11-1 ; end++){
//			currsum += arr[end];
//			maxsum = max(maxsum , currsum);
//		}
//	}
//	cout<<"Max sum is: "<<maxsum;
//}

//--------------------------------------------------kadanes algorithm ------------------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> arr = {2, -3, 5, -1, 6, -4, 2, -1, 7, -5, 2};

	int maxsum=0 , csum=0;
	for(int i: arr){
		csum += i;
		maxsum = max(maxsum , csum);
		if(csum < 0){
			csum = 0;
		}
	}
	cout<<"Max sub-array sum: "<<maxsum;
}
