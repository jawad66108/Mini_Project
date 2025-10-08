//#include<iostream>
//using namespace std;
//int main(){
//	int n=5;
//	int arr[n]={1,2,3,4,5};
//	
//	for(int st=0;st<n;st++){
//		for(int end=st;end<n;end++){
//			for(int i=st;i<=end;i++){
//				cout<<arr[i];
//			}
//			cout<<" ";
//		}
//		cout<<endl;	
//	}
//}
//=====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=5;
//	int arr[n]={1,2,3,4,5};
//	int mx=0;
//	for(int st=0;st<n;st++){
//		int sum_max=0;
//		for(int end=st;end<n;end++){
//			sum_max+=arr[end];
//			mx=max(sum_max,mx);
//		}
//	}
//	cout<<"Max sum from all possible sub-arrays is :"<<mx;
//}
//======================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=7;
//	int arr[n]={3,-4,5,4,-1,7,-8};
//	int mx=0,sum_max=0;
//	for(int i=0;i<n;i++){
//		sum_max+=arr[i];
//		mx=max(sum_max,mx);
//		if(sum_max<0){
//			sum_max=0;
//		}
//	}
//	cout<<"MAX sum is : "<<mx;
//}

