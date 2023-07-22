#include <bits/stdc++.h>
using namespace std;

//void ID_number(int n){
//	int arr[n];
//	for(int i = 0; i < n; i++)
//  	cin >> arr[i];
//	int sum;
//	cin >> sum;
//	int cnt =0;
//for(int i = 0; i < n; i++){
//    if(arr[i] == sum) cnt++;
//}if(cnt == 0)
//	cout << "No";
//else
//	cout<< "Yes";
//}
//
//int main(){
//	int n;
//	cin >> n;
//	ID_number(n); 
//}





// void done(int a ){
// 	int arr[a]; 
// 	for(int i=0; i<a; i++)
// 	cin>> arr[i]; 
// 	int sum; 
// 	cin>> sum; 
// 	int cnt=0; 
// 	for(int i=0; i<a; i++){
// 		if (arr[i]==sum) 
// 		cnt++; 
		
// 	}
// 	if (cnt==0)
// 	cout<< "NO"; 
// 	else 
// 	cout<< "yes" ; 
		
	
// }
// int main(){
// 	int a; 
// 	cin>> a; 
// 	done(a); 
// }


void done(int n){
	int arr[n] ; 
	for(int i=0; i<n ;i++){
		cin>> arr[i] ; 
	}
	int second ; 
	cin>> second ; 
	int sum =0; 
	for(int i=0; i<n; i++){
		if (arr[i]==second)
		sum++; 
	}
	if (sum==0){
		cout<< "no" ; 
	}else {
		cout<< "yes" ; 
	}
}
int main() {
	int n; 
	cin>> n; 
	done(n) ; 
	return 0; 
}






	//// 	SECOND METHOD
// void student_id(int n){
	 
// 	int arr[n] ; 
// 	for(int i=0; i<n ;i++){
// 		cin>> arr[i] ; }
// 	int second ; 
// 	cin>> second ;
// 	for(int i=0; i<n ;i++){
// 		if (arr[i]==second){
// 			cout<< "yes" ; 
// 			return;
// 		}
// 	} 
// 	cout<< "No" ; 
// }
// int main(){
// 	int n; 
// 	cin>> n; 
// 	 student_id(n) ; 
// 	return 0; 

// }








