#include <iostream>
using namespace std;

//void change_array(int x, int y){
//    int arr[x][y];
//    for(int i = 0; i < x; i++){
//        for(int j = 0; j < y; j++){
//            cin >> arr[i][j];
//        }
//    }
//    for(int i = 0; i < y; i++){
//        for(int j = 0; j < x; j++){
//            cout << arr[j][i] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main(){
//    int n, m; 
//	cin >> n >> m;
//    change_array(n, m);
//} 


	// void change(int a, int b){
	// 	int arr[a][b]; 
	// 	for(int i=0; i<a; i++){
	// 		for(int j=0; j<b; j++){
	// 			cin>> arr[i][j]; 
	// 		}
	// 	}
	// 	for(int i=0; i<b; i++){
	// 		for(int j=0; j<a; j++){
	// 			cout<< arr[j][i] << " "; 
	// 		}
	// 		cout<< endl; 
	// 	}
	// }
	// int main() {
	// 	int a,b; 
	// 	cin>> a >> b; 
	// 	change (a,b); 
	// }





void traspose_1( int n , int m){
	int arr[n][m]; 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>> arr[i][j] ; 
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<< arr[j][i] << " "  ;
		}
		cout<< endl; 
	}



