#include <bits/stdc++.h>
using namespace std;

//void Girls_percentage(double n, double m){
//    double perc = (m * 100) / n;
//    cout << setprecision(6) << perc;
	////setprecision round up the number in its decimal
//}
//
//	int main(){
//	double n, m;
//	cin >> n >> m;
//	Girls_percentage (n, m); 
//}


// void done(double n ,double m){
// 	double per= (m*100)/n; 
// 	cout<< per  ;
// }
// int main() {
// double n,m; 
// cin>> n >> m ; 
// done(n,m); 
// }





void done(double a, double b){
	double first = (100*b)/a ; 
	cout<< first ; 
}
int main() {
	int a ,b; 
	cin>> a >> b; 
	done(a,b) ;
	return 0; 
}