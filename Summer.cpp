//#include<iostream>
//using namespace std;
//void Prime(int a){
//	bool p=true;
//	for(int i=2;i<=a/2;i++){
//		if(a%i==0){
//			p=false;
//			break;
//		}
//	}
//		if(p){
//			cout<<"Number is  Prime";
//		}else{
//			cout<<a<<" is NOT Prime";
//		}
//	}
//int main(){
//	int a;
//	cout<<"Enter your number: ";
//	cin>>a;
//	Prime(a);

//==================================================================
//#include<iostream>
//using namespace std;
//void fb(int num){
//	int a=0,b=1,c;
//	cout<<a<<"\t"<<b<<"\t";
//	for(int i=0;i<=num;i++){
//		c=a+b;
//		cout<<c<<"\t";
//		a=b;
//		b=c;
//	}
//}
//int main(){
//	int num;
//	cout<<"n: ";
//	cin>>num;
//	fb(num);
//}
//=================================================================
//#include<iostream>
//using namespace std;
//int ap(int num){
//	int ans=0;
//	while(num>=0){
//		ans=num%2;
//		num/=10;
//		ans+=num;
//	}
//	return ans;
//}
//int main(){
//	int a;
//	cout<<"Enter the number: ";
//	cin>>a;
//	cout<<ap(a);
//}
//================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int a;
//	cout<<"Enter the number :";
//	cin>>a;
//	if(a>0 && ((a & (a-1))==0)){
//		cout<<a<<" is power of two";
//	}else{
//		cout<<a<<" is not ";
//	}
//}
//=================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={23,42,62,83,99,73,59,3,52,63,73,66};
//	int max=arr[0],min=arr[0];
//	for(int i=0;i<12;i++){
//		if(arr[i]>max)
//		max=arr[i];
//		if(arr[i]<min)
//		min=arr[i];
//	
//	}
//	cout<<"Max: "<<max<<"\nMIN: "<<min<<"\n===========After swaping===============";
//	swap(max,min);
//	cout<<"\nMax: "<<max<<"\nMIN: "<<min;
//}
//==================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={3,4,8,7,3,7};
//	for(int i=0;i<6;i++){
//		bool a=true;
//		for(int j=0;j<6;j++){
//			if(i!=j && arr[i]==arr[j]){
//				a=false;
//				break;
//			}
//		}
//		if(a){
//		cout<<arr[i]<<"\t";
//	}
//	}
//	
//}
//===================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={1,2,3,4},b[]={3,4,5,6};
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			if(i!=j && a[i]==b[j]){
//				cout<<a[i]<<"\t";
//			}
//		}
//	}
//}
//=====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={1,2,3,4,3,2,4};
//	int ans=0;
//	for(int i=0;i<7;i++){
//		ans =ans ^arr[i];
//	}
//	cout<<ans;
//}
//=======================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=7,tag=9;
//	int a[n]={-1,0,3,4,5,9,12};
//	int st=0,end=n-1,mid=0;
//	while(st<=end){
//		mid=st+(end-st)/2;
//		if(tag==a[mid]){
//			cout<<mid;
//			return 0;
//		}
//		else if(tag>a[mid]){
//			st=mid+1;
//		}
//		else if(tag<a[mid]){
//			end=mid-1;
//		}
//		else{
//			cout<<"random error!!!!";
//		}
//	}
//}
//======================================================================
//#include<iostream>
//using namespace std;
//
//int  BS(int st,int end,int arr[],int tag){
//	if(st<=end){
//		int mid=st+(end-st)/2;
//		if(tag>arr[mid]){
//			return BS(mid+1,end,arr,tag);
//		}
//		else if(tag<arr[mid]){
//			return BS(st,mid-1,arr,tag);
//		}
//		else{
//			return mid;
//		}
//		
//	}
//	return -1;
//}
//int main(){
//	int n=6,tag=6;
//	int arr[n]={0,2,4,5,6,9};
//	int st=0,end=n-1;
//	cout<<BS(st,end,arr,tag);
//}
//======================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=7,tag=0;
//	int arr[]={3,4,5,6,7,0,1,2},st=0,end=n-1,mid;
//	while(st<=end){
//		mid=st+(end-st)/2;
//		if(arr[mid]==tag){
//			cout<<"Present on index: "<<mid;
//			return 0;
//		}
//		else if(arr[st]<=arr[mid]){
//			if(arr[st]<=tag && tag<=arr[mid]){
//				end=mid-1;
//			}else{
//				st=mid+1;
//			}
//		}else if(arr[mid]<=arr[end]){
//			if(arr[mid]<=tag && tag<=arr[end]){
//				st=mid+1;
//			}
//		}
//	}
//}
//=====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[]={4,1,5,2,3};
//	for(int i=0;i<5;i++){
//		for(int j=0;j<5-i-1;j++){
//			if(arr[j]>arr[j+1]){
//				swap(arr[j],arr[j+1]);
//			}
//		}
//	cout<<arr[i]<<" | ";
//	}
//}
//====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=5;
//	int sum( n){
//		if(n==0){
//			return -1;
//		}
//		cout<<return n+(n-1);
//	}
//}
//====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int at[]={4,1,5,2,3};
//	for(int  i=0;i<5;i++){
//		int a=i;
//		for(int j=i+1;j<5;j++){
//			if(at[j]<at[a]){
//				a=j;
//			}
//		}
//		swap(at[i],at[a]);
//		cout<<at[i]<<" ";
//	}
//}
//====================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=6;
//	int fb(n){
//		if(n==0 || n==1){
//			return n;
//		}
//		return fb(n-1)+fb(n-2);
//	}
//}
//======================================================================
//#include<iostream>
//using namespace std;
//int vital(int at[]){
//	for(int i=1;i<5;i++){
//		int curr=at[i];
//		int pre=i-1;
//		while(pre>=0 && at[pre]>curr){
//			at[pre+1]=at[pre];
//			pre--;
//		}
//		at[pre+1]=curr;
//		cout<<at[i];
//	}
//}
//int main(){
//	int at[]={4,1,5,2,3};
//	vital(at);
//}
//=======================================================================
//#include<iostream>
//using namespace std;
//int fac(int a){
//	if(a==0){
//		return 1;
//	}
//	return a*fac(a-1);
////	return a+fac(a-1);
//}
//int main(){
//	cout<<fac(5);
//}
//=======================================================================
//#include<iostream>
//using namespace std;
//int fb(int a){
//	if(a==0 || a==1){
//		return a;
//	}
//	return fb(a-1)+fb(a-2);
//}
//int main(){
//	for(int i=0;i<5;i++)
//	cout<<fb(i)<<" ";
//}
//=========================================================================
//#include<iostream>
//using namespace std;
//bool ck(int at[] ,int a){
//	if(a==0 || a==1){
//		return true;
//	}
//	return at[a-1]>=at[a-2] && ck(at,a-1);
//}
//int main(){
//	int n = 5;
//	int at[n]={1,2,3,4,5};
//	cout<<ck(at,n);
//}
//===========================================================================
//#include<iostream>
//using namespace std;
//class Node{
//	public:
//		int data;
//		Node* next;
//		Node(int data){
//			this->data=data;
//			next=NULL;
//		}		
//};
//
//class List{
//	public:
//	Node *head;
//	Node *tail;
//	List(){
//		head=tail=NULL;
//	}
//	
//	void push_front(int data){
//		Node* newnode=new Node(data);
//		if(head==NULL){
//			head=tail=newnode;
//		}else{
//			(*newnode).next=head;
//			head=newnode;
//		}
//	}
//	
//	void push_back(int data){
//		Node *newnode =new Node(data);
//		if(head==NULL){
//			head=tail=newnode;
//		}else{
//			(*tail).next=newnode;
//			tail=newnode;
//		}
//	}
//	
//	void dis(){
//		Node *temp=head;
//		while(temp!=NULL){
//			cout<<(*temp).data<<" -> ";
//			temp=(*temp).next;
//		}
//	}
//	
//	void pop_front(){
//		Node*temp=head;
//		head=(*head).next;
//		(*temp).next=NULL;
//		delete temp;
//	}
//
//};
//int main(){
//	List l;
//	l.push_front(71);
//	l.push_front(63);
//	l.push_front(88);
//	l.push_front(12);
//
//	l.push_back(24);
//	l.pop_front();
//	l.pop_back();
//	l.dis();
//}
