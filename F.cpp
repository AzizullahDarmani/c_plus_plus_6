#include <bits/stdc++.h>
using namespace std;

//void isValid(string s ,int num) {
//    int m =0;
//    for(int i = 0; i < s.size(); i++){
//        if(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
//        //In C++, characters can be converted into their 
//		//corresponding integer values using ASCII code conversions. 
//		//The ASCII value of '0' is 48 and the ASCII value of '9' is 
//		//57. So, when the expression s[i] - '0' is evaluated, it 
//		//subtracts the ASCII value of '0' from the ASCII value of 
//		//the current character in s[i]. This results in an integer 
//		//value between 0 and 9, which represents the numerical value 
//		//of the digit.
//            m++;
//        }
//    }
//    if(m >= num) {
//        cout <<"YES";
//    }
//    else {
//        cout <<"NO";
//    }
//}
//
//int main(){
// 	string s;
// 	int num; 
// 	cin >> s >> num;
// 	isValid(s, num); 
//
//}





//void valide(string s, int num){
//	int m= 0 ;
//	for(int i=0; i<s.size(); i++){
//		if (s[i]-'0'>=0 and s[i]-'0'<=9){
//			m++; 
//		}
//	}
//	if (m>=num){
//		cout<< "yes"; 
//	}else {
//		cout<< "No";  
//	}
//}
//int main() {
//	string s ;
//	int num; 
//	cin>> s >> num; 
//	valide(s, num);  
//}




//void checking(string done, int num){
//	int sum=0; 
//	for(int i=0; i<done.size(); i++)
//	if (done[i]-'0'>=0 and done[i]-'0'<=9)
//	sum++; 
//	if (sum>=num)
//	cout<< "yes"; 
//	else 
//	cout<< "No"; 
//}
//int main() {
//	string done; 
//	int num; 
//	cin>> done >> num; 
//	checking (done, num);  
//}



// void checking(string s, int n){
//     int sum = 0; 
//     for(int i=0; i<s.size(); i++){
//         if (s[i]-'0'>=0 and s[i]-'9'<=9)
//         sum++; 
//     }
//     if (sum==n){
//         cout<< "yes" ; 
//     }else {
//         cout<< "no" ; 
//     }
// }
// int main() {
//     string s ; 
//     int n ; 
//     cin>> s >> n; 
//     checking(s,n) ; 
//     return 0; 
// }



void checking(string s , int n){
    int sum =0; 
    for(int i=0; i<s.size(); i++){
        if (s[i]-'0'>=0 and s[i]-'9'<=9)
        sum++; 
    }
    if (sum== n){
        cout<< "yes" ; 
    }else {
        cout<< "no" ; 
    }
}
int main() {
    string s ;
    cin>> s; 
    int n; 
    cin>> n; 
    checking(s,n) ; 
    return 0; 
}