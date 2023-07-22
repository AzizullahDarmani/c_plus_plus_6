#include <bits/stdc++.h>
using namespace std;

//double hypotenuse( int a, int b) {
//    return sqrt(a*a + b*b) ;
//}
//
//	int main(){
//	int a, b;
//	cin >> a >> b;
//	cout << setprecision(4); 
//	cout<< hypotenuse(a,b) ; 
//	//setprecision(4) is a manipulator function used to set 
//	//the precision of floating-point numbers output to the 
//	//console. In this code, setprecision(4) sets the 
//	//precision of the output of hypotenuse(a,b) to 4 decimal 
//	//places. This means that when the hypotenuse(a,b) function 
//	//is called and the result is output to the console, it will 
//	//be rounded to 4 decimal places.

//}


// double hypotenuse(int a, int b){
// 	return sqrt(a*a + b*b); 
// }
// int main() {
// 	int a,b; 
// 	cin>> a >> b; 
// 	cout<< hypotenuse(a,b); 
// }






double hypothesis(int a, int b){
	double result = sqrt(a*a+b*b); 
	return result; 
}
int main() {
	int a ,b; 
	cin>> a >> b; 
	cout<< hypothesis(a,b) ; 
	return 0; 
}