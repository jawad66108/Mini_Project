//#include<iostream>
//using namespace std;
//void prime(int a){
//	bool ip=true;
//	for(int i=2;i<=a/2;i++){
//		if(a%i==0){
//			ip=false;
//			break;
//			
//	}
//	}
//	if(ip){
//		cout<<a<<" Prime";
//	}else{
//		cout<<a<<" not";
//	}
//}
//int main(){
//	int a=5;
//	prime(a);
//}

//=============================================================
//#include<iostream>
//using namespace std;
//void prime(int n){
//	for(int i=2;i<=n;i++){
//			bool isp=true;
//		for(int j=2;j<=i/2;j++){
//		if(i%j==0){
//			isp=false;
//			break;
//		}
//	}
//		if(isp){
//			cout<<i<<" ";
//		}
//	}
//}
//int main(){
//	int n=15;
//	prime(n);
//}

//===============================================================
//#include<iostream>
//using namespace std;
//void fac(int a){
//	int fact=1;
//	for(int i=1;i<=a;i++){
//		fact=fact*i;
//	}
//	cout<<"fact of "<<a<<" : "<<fact;
//}
//int main(){
//	fac(5);
//}

//==============================================================
//#include<iostream>
//using namespace std;
//void fab(int n){
//	int a=0,b=1,c;
//	cout<<a<<"\t"<<b<<"\t";
//	for(int i=0;i<=n;i++){
//		c=a+b;
//		a=b;
//		b=c;
//		cout<<c<<"\t";
//	}
//}
//int main(){
//	fab(10);
//}

//=================================================================
//#include<iostream>
//using namespace std;
//int main(){
//	int n=32;
//	
//	if(n>0 &&(n&(n-1))==0){
//		cout<<n<<" is the power of 2";
//	}else{
//		cout<<n<<" is not power of 2";
//	}
//}

//==================================================================
//#include<iostream>
//using namespace std;
//void re(int a){
//	int s=0;
//	while(a>0){
//		int c=a%10;
//		s=s*10+c;
//
//		a=a/10;
//		
//}
//	cout<<s;
//}
//int main(){
//	re(1354);
//}

//====================================================================
//#include<iostream>
//using namespace std;
//void unique(int arr[],int n){
//	for(int i=0;i<n;i++){
//		bool ii=true;
//		for(int j=0;j<n;j++){
//			if(i!=j && arr[i]==arr[j]){
//				ii=false;
//				break;
//			}
//		}
//		if(ii){
//			cout<<arr[i];
//		}
//	}
//}
//int main(){
//	int n=5;
//	int arr[n]={3,2,5,3,6};
//	unique(arr,n);
//}

//=====================================================================
//#include<iostream>
//using namespace std;
//
//void same(int arr[],int ar[],int n){
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(arr[i]==ar[j]){
//				cout<<arr[i]<<" ";
//			}
//		}
//	}
//}
//
//int main(){
//	int n = 6;
//	int arr[n]={1,2,3,6,7,8},ar[n]={2,3,4,1,6};
//	same(arr,ar,n);
//}

//==============/====================/=======================/==========
//#include<iostream>
//using namespace std;
//
//int Binary(int arr[],int n,int tag){
//	int st=0,end=n-1,mid;
//
//	while(st<=end){
//		mid=st+(end-st)/2;
//		if(arr[mid]==tag){
//			return mid;
//		}
//		else if(tag>arr[mid]){
//			st=mid+1;
//		}
//		else if(tag<arr[mid]){
//			end=mid-1;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int n=8,tag=6;
//	int arr[n]={1,2,3,4,5,6,7};
//	
//	cout<< Binary(arr,n,tag);
//}

//========================================================================
//#include<iostream>
//using namespace std;
//
//int RBinary(int arr[],int n,int tag){
//	int st=0,end=n-1,mid;
//	
//	while(st<=end){
//		mid=st+(end-st)/2;
//		
//		if(arr[mid]==tag){
//			return mid;
//		}
//		if(arr[st]<=arr[mid]){
//			if(arr[st]<=tag && tag<arr[mid]){
//				end=mid-1;
//			}else{
//				st=mid+1;
//			}
//		}
//		else{
//			if(arr[mid]<tag && tag<=arr[end]){
//				st=mid+1;
//			}
//			else{
//				end=mid-1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int n=7,tag=1;
//	int arr[n]={3,4,5,6,0,1,2};
//	cout<<RBinary(arr,n,tag);
//}

//=======================================================================
//#include<iostream>
//using namespace std;
//
//void Bubble(int arr[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-i-1;j++){
//			if(arr[j]>arr[j+1]){
//				swap(arr[j],arr[j+1]);
//			}
//		}
//		
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}
//
//int main(){
//	int n=5;
//	int arr[5]={5, 4, 1, 2, 3};
//	Bubble(arr,n);
//}

//=========================================================================
//#include<iostream>
//using namespace std;
//
//void Selec(int arr[],int n){
//	for(int i=0;i<n-1;i++){
//		int sam=i;
//		for(int j=i+1;j<n;j++){
//			if(arr[j]<arr[sam]){
//				sam=j;
//			}
//			
//		}
//		swap(arr[i],arr[sam]);
//	}
//}
//
//int main(){
//	int n=5;
//	int arr[5]={5, 4, 1, 2, 3};
//	Selec(arr,n);
//	 for(int i = 0; i < n; i++){
//        cout << arr[i] << " ";
//    }
//
//}

//==========================================================================
//#include<iostream>
//using namespace std;
//
//int sum(int n){
//	if(n==0){
//		return 0;
//	}
//	
//	return n + sum(n-1);
//}
//
//int main(){
//	cout<<sum(4);
//}

//==============================================================================
//#include<iostream>
//using namespace std;
//
//int inser(int arr[],int n){
//	for(int i=1;i<n;i++){
//	int cur=arr[i];
//	int pre=i-1;
//	while(pre >0 && arr[pre]>cur){
//		arr[pre+1]=arr[pre];
//		pre--;
//	}
//	return arr[pre+1]=cur;
//}
//}
//
//int main(){
//	int n=5;
//	int arr[5]={5, 4, 1, 2, 3};
//	inser(arr,n);
//	
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}

//===============================================================================
//#include<iostream>
//using namespace std;
//
//bool rev(int arr[],int n){
//	
//	if(n==0 || n==1){
//		return true;
//	}
//	
//	return arr[n-1]>=arr[n-2] && rev ( arr,n-1);
//}
//
//int main(){
//	int n=5;
//	int arr[5]={1,2,3,434,554};
//	rev(arr,n);
//	if(rev(arr,n)){
//		cout<<"It is sorted";
//	}
//	else{
//		cout<<" it is not";
//	}
//}

//=================================================================================
//#include<iostream>
//using namespace std;
//
//int BS(int arr[],int st,int end,int n,int tag){
//
//	if(st>end){
//		return -1;
//	}
//	
//	int mid=st+(end-st)/2;
//	if(tag>arr[mid]){
//		return BS(arr,mid+1,end,n,tag);
//	}
//	
//	if(tag<arr[mid]){
//		return BS(arr,st,mid-1,n,tag);
//	}
//	
//	if(tag==arr[mid]){
//		return mid;
//	}
//}
//
//int main(){
//	int n=5;
//	int arr[n]={2,5,6,8,9},tag=8;
//	int st=0,end=n-1,mid;
//	int nn =BS(arr,st,end,n,tag);
//	cout<<nn;
//}

//===================================================================================
//#include<iostream>
//using namespace std;
//
//class Node{
//	public:
//	int data;
//	Node *next;
//	Node(int data){
//		this->data =data;
//		next=NULL;
//	}
//};
//
//class list{
//	public:
//	Node *head;
//	Node *tail;
//	
//	list(){
//		head=tail=NULL;
//	}
//	
//	push_front(int data){
//		Node *newnode=new Node(data);
//		
//		if(head==NULL){
//			head=tail=newnode;
//		}else{
//			newnode-> next=head;
//			head=newnode;		
//		}
//	}
//	
//	push_back(int data){
//		Node *newnode=new Node(data);
//		
//		if(head==NULL){
//			head=tail=newnode;
//		}else{
//			tail -> next= newnode;
//			tail=newnode;		
//		}
//	}
//	
//	pop_front(){
//		Node *temp=head;
//		
//		head = head->next;
//		temp-> next=NULL;
//		
//		delete temp;
//
//	}
//	
//	pop_back(){
//		Node *temp=head;
//		
//		while(temp->next!=tail){
//			temp=temp->next;
//		}
//		
//		delete tail;
//		tail=temp;
//		tail->next =NULL;
//	}
//	
//	Node *middle(Node* head ){
//		Node* slow=head;
//		Node* fast=head;
//		
//		while(fast->next !=NULL && fast->next->next !=NULL){
//			slow=slow->next;
//			fast=fast->next->next;
//		}
//		
//		return slow;
//	}
//	
//	void res(){
//		Node *next=NULL;
//		Node *pre=NULL;
//		Node *cur=head;
//		
//		while(cur>0 && cur!=NULL){
//			next =cur->next;
//			cur->next = pre;
//			pre=cur;
//			cur=next;
//		}
//		head=pre;
//	}
//	
//	void dis(){
//		Node *temp=head;
//					
//			while(temp!=NULL){
//				cout<<(*temp).data<<" -> ";
//				temp=(*temp).next;
//				
//			}
//		}
//
//};
//
//int main(){
//	list l;
//	l.push_front(234);
//	l.push_front(235);
//	l.push_front(235324);
//	l.push_front(6747);
//	
//	l.push_back(24);
////	l.pop_front();
//	
////	l.pop_back();
//	
//	
//	l.dis();
//	
//	Node* mid = l.middle(l.head);
//    cout<<mid->data;
//
//	cout<<"__________AFTER REVERSING_____________\n";
//	l.res();
//	l.dis();
//
//}

//=========================================================================
#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *left;
	Node *right;
	
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};

static int idx=-1;

Node *Built(int pre[]){
	idx++;
	 if (pre[idx] == -1) return NULL;

	Node *root =new Node(pre[idx]);
		root->left=Built(pre);
		root->right=Built(pre);
		return root;
	
}
	void preorder(Node *root) {
		
		if (root == NULL) return;
		
		
		cout<< root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}


int main(){
	int pre[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
//
    Node* root = Built(pre);

    cout << "Preorder: ";
    preorder(root);
}
