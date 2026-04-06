// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string org= "jawadddddddddddddddddddddddddddddd";
// 	string ne = org;
// 	reverse(ne.begin(), ne.end());
// 	if(org == ne){
// 		cout<<"Its plidrome";
// 	}else{
// 		cout<<"Its not!!!!";
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int arr[5]={2,3,4,5,5};
// 	map<int,int> fee ;
	
// 	for(int x:arr){
// 		fee[x]++;
// 	}
	
// 	for(auto p:fee){
// 		cout<<p.first<<" appeared : "<<p.second<<" times \n";
		
// 	}
	
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[5]={23,43,543,2333,99999};
  if(is_sorted(arr,arr+5)){
    cout<<"It is";
  }else{
    cout<<"It's not ";
  }
}