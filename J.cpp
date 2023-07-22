#include <iostream>
using namespace std;

//int maximum(int a, int b, int c, int d){
//    int max = -1e9, arr[] = {a, b, c, d};
//    for(int i = 0; i < 4; i++)
//	if(max < arr[i])  
//	max = arr[i];
//    return max;
//}
//
//int main(){
//    int a, b, c, d; 
//	cin >> a >> b >> c >> d;
//    cout << maximum(a, b, c, d);
//}


//int maximum (int a, int b, int c, int d){
//	int max  = -1e9, 
//	arr[4]={a,b,c,d}; 
//	for(int i=0; i<4 ;i++)
//		if (arr[i]>max)
//		max = arr[i]; 
//		return max; 
//	
//}
//int main(){
//	int a,b,c,d; 
//	cin>> a >> b >> c >>d; 
//	cout<< maximum(a,b,c,d); 
//}



// int maximum(int a, int b, int c, int d){
// 	int max=-1e9; 
// 	int arr[4]={a,b,c,d}; 
// 	for(int i=0; i<4; i++)
// 		if (arr[i]>max)
// 		max = arr[i]; 
// 		return max; 
	
// }
// int main() {
// 	int a,b,c,d; 
// 	cin>> a >> b >> c >>d; 
// 	cout<< maximum(a,b,c,d); 
// }








// int maximum(int arr[], int size){
//     int max = arr[0]; 
//     for(int i=1; i<size; i++){
//         if (arr[i] > max)
//             max = arr[i]; 
//     }
//     return max; 
// }

// int main() {
//     const int size = 4;
//     int arr[size]; 
//     for(int i=0; i<size; i++){
//         cin>> arr[i]; 
//     }
//     cout<< maximum(arr, size); 
//     return 0; 
// }



int maximum(int arr[4]){
	int max = -1e9; 
	for(int i=0; i<4; i++){
		if (arr[i]>max)
		max = arr[i]  ; 
	}
	return max ; 
}
int main() {
	int arr[4] ; 
	for(int i=0; i<4; i++){
		cin>> arr[i] ; 
	}
	cout<< maximum(arr); 
	return 0; 
}