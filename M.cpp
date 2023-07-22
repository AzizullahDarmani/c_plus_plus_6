#include <iostream>
using namespace std;

//void Reverse_order(int size, int a[]){
//    for(int i = size - 1; i >= 0; i--){
//        cout << a[i] << " ";
//    }
//}
//
//int main(){
//    int n; 
//	cin >> n;
//    int arr[n];
//
//    for(int i = 0; i < n; i++){
//        cin >> arr[i];
//    }
//    Reverse_order(n, arr); 
//}


// void reverse_order(int a, int arr[]){
// 	for(int i=a-1; i>=0; i--){
// 		cout<< arr[i] << " "; 
// 	}
// }
// int main() {
// 	int a; 
// 	cin>> a; 
// 	int arr[a]; 
// 	for(int i=0; i<a; i++){
// 		cin>> arr[i]; 
// 	}
// 	reverse_order(a,arr); 
// }




void reverse_function (int n , int arr[]){
	for(int i=n-1; i>=0; i--){
		cout<< arr[i] << " " ; 
	}
}
int main() {
	int n; 
	cin>> n; 
	int arr[n] ; 
	for(int i=0; i<n; i++){
		cin>> arr[i] ; 
	}
	reverse_function(n , arr);   
	return 0; 
}