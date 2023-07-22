// #include <iostream>
// #include <cmath>
// using namespace std;

// int different(int a, int b){
// 	//  "abs": is a function which is included in cmath 
// 	//  library. which is a positive collection of mathematical 
// 	//  functions
//    return abs(b - a);
// }

// int main(){
//    int n; cin >> n;
//    int a[n], b[n];

//    for(int i = 0; i < n; i++) 
// 	cin >> a[i];
//    for(int i = 0; i < n; i++) 
// 	cin >> b[i];
//    for(int i = 0; i < n; i++) 
// 	cout << different(a[i], b[i]) << " "; 
// }


// #include<iostream>
// #include<cmath>
// using namespace std; 
// int differ(int a, int b){
// 	return abs(a-b); 
// }
// int main(){
// 	int n ; 
// 	cin>> n; 
// 	int a[n], b[n]; 
// 	for(int i=0; i<n; i++)
// 		cin>> a[i];
// 	for (int i=0; i<n ;i++)
// 	cin>> b[i]; 
// 	for(int i=0; i<n ;i++)
// 	cout<< differ(a[i],b[i]) << " "; 
	
// }




// #include<iostream>
// #include<cmath>
// using namespace std;
// int array_difference( int a, int b){
// 	return abs(b - a) ;  
	
// }
// int main() {
// 	int n; 
// 	cin>>n ;
// 	int a[n], b[n] ; 
// 	for(int i=0; i<n ;i++)
// 		cin>> a[i] ; 
	
// 	for(int i=0; i<n; i++)
// 		cin>> b[i] ; 
// 	for(int i=0; i<n; i++)
// 	cout<< array_difference(a[i], b[i]) << " " ; 
// }




// #include<iostream>
// using namespace std;
// int array_differ(int a, int b) {
// 	return abs(b-a) ; 
// }
// int main() { 
// 	int n ;
// 	cin>> n ; 
// 	int a[n] ;
// 	int b[n] ; 
// 	for(int i=0; i<n; i++){
// 		cin>> a[i] ; 
// 	} 
// 	for(int i=0; i<n ;i++){
// 		cin>> b[i] ; 
// 	}
// 	for(int i=0; i<n ;i++){
// 		cout<< array_differ(a[i],b[i])   << " " ; 
// 	}
// 	return 0; 
// } 



#include<iostream> 
using namespace std;
int arr_differ(int a, int b) {
	return abs(b-a) ; 
}
int main(){
	int n; 
	cin>> n; 
	int a[n], b[n] ; 
	for(int i=0; i<n; i++){
		cin>> a[i] ; 
	}
	for(int i=0; i<n; i++){
		cin>> b[i] ; 
	}
	for(int i=0; i<n; i++){
		cout<< arr_differ(a[i], b[i]) << " " ; 
	}
	return 0; 
}