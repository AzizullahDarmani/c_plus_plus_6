#include <bits/stdc++.h>
using namespace std;

//void Equal_elements(int n){
//    int sum = 0; 
//    int a[n], b[n];
//    int m = n;
//    for(int i = 0; i < n; i++)
//	 cin >> a[i];
//    for(int i = 0; i < n; i++) 
//	cin >> b[i];
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < m; j++){
//            if( a[i] == b[j] ){
//            //In the provided code, b[j] = b[m-1] is used 
//			//to remove the element from array b that has 
//			//already been matched with some element in 
//			//array a.
//                b[j] = b[m-1];
//                m--;
//                sum++;
//                break;
//            }
//        }
//    }cout << sum;
//}
//
//int main(){
//    int n;   
//    cin >> n;
//Equal_elements(n);
//}





void equal_elements(int n) {
	int cnt =0; 
	int a[n],b[n] ; 
	int m =n; 
	for(int i=0; i<n; i++){
		cin>> a[i] ; 
	}
	for(int j=0; j<m; j++){
		cin>> b[j] ; 
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m ;j++){
			if (a[i]==b[j]){
				b[j] = b[m-1]  ; 
				m--; 
				cnt++; 
				break; 
			}
		}
	}
	cout<< cnt << endl; 
}
int main() {
	int n ;
	cin>> n; 
	equal_elements(n) ; 
}



// void done(int n ){
// int sum=0; 
// int m = n ; 
// int a[n], b[n]; 
// for(int i=0; i<n ;i++)
// cin>> a[i]; 
// for(int i=0; i<n; i++)
// cin>> b[i]; 
// for(int i=0; i<n; i++){
// 	for(int j=0; j<m; j++){
// 		if (a[i]==b[j]){
// 			b[j]= b[m-1]; 
// 			m--; 
// 			sum++; 
// 		}
// 	}
// }
// cout<< sum << endl; 

// }
// int main() {
// 	int n; 
// 	cin>>n; 
// 	done(n); 
// }



// #include<iostream>
// using namespace std;

// int count_num(int a[], int b[], int n) {
//     int cnt = 0; 
//     for(int i=0; i<n; i++){
//         if (a[i] == b[i])
//             cnt++; 
//     }
// 	return cnt ; 
// }

// int main() {
//     int n; 
//     cin>> n; 
//     int a[n], b[n];
//     for(int i=0; i<n; i++){
//         cin>> a[i] ; 
//     }
//     for(int i=0; i<n ;i++){
//         cin>> b[i] ; 
//     }
	 
//     int cnt =   count_num(a, b, n);
//     cout<< "The count of equal numbers in two arrays: "<< cnt << endl ; 
//     return 0 ; 
// }



// int count_equals(int a[], int b[], int n){
// 	int cnt =0; 
// 	for(int i=0; i<n; i++){
// 		if (a[i]==b[i]){
// 			cnt++; 
// 		}
// 	}
// 	return cnt ; 
// }
// int main() {
// 	int n; 
// 	cin>> n; 
// 	int a[n], b[n] ; 
// 	for(int i=0; i<n ;i++){
// 		cin>> a[i] ; 
// 	}
// 	for(int i=0; i<n; i++){
// 		cin>> b[i] ; 
// 	}
// 	int cnt = count_equals(a,b,n) ; 
// 	cout<< "the count of equal numbers in array is: "<< cnt << endl ;
// 	return 0;  
// }
