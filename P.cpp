#include <bits/stdc++.h>
using namespace std;

//void positive_number (int n){
//    if(n < 0) 
//	cout << n * (-1);
//    else 
//	cout << n;
//}
//
//	int main(){
//	int n;
//	cin >> n;
//	positive_number(n);
//}




void done(int n){
    if (n>0){
        cout<< n ; 
    }else {
        cout<< n*(-1) ; 
    }
}
int main() {
    int n; 
    cin>> n; 
    done(n); 
    return 0; 
}



