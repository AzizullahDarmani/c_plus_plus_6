#include <iostream>
using namespace std;

//bool Validate(string text, int a){
//    int cnt = 0; 
//    for(int i = 0; i < text.size(); i++){
//        if(text[i] >= '0' and text[i] <= '9')
//		cnt++;
//        else 
//		cnt = 0;
//        if(cnt == a) 
//		return true;
//    }
//    return false;
//}
//
//int main(){
//    string s; cin >> s;
//    int n; cin >> n;
//    cout << (Validate(s, n) ? "Valid" : "Not valid");
//}



//bool is_valid(string text, int num){
//	int number=0; 
//	for(int i=0; i<text.size(); i++){
//		if (text[i]>='0' and text[i]<='9')
//		number++; 
//		else 
//		number= 0;  
//		if (number>=num)   
//		return true; 
//		
//	}
//	return false; 
//}
//int main(){
//	string text; 
//	cin>> text; 
//	int num ; 
//	cin>> num;  
//	if (is_valid(text, num))
//	cout<< "valid"; 
//	else 
//	cout<< "is not valid"; 
//}


// bool is_valid(string text, int num){
// 	int number =0; 
// 	for(int i=0; i<text.size(); i++){
// 		if (text[i]>='0' and text[i]<='9')
// 		number++; 
// 		else 
// 		number=0;  
// 		if (number>=num)
// 		return true ; 
// 	}
// 	return false; 
// }
// int main() {
// 	string text; 
// 	int num; 
// 	cin>> text >> num; 
// 	if (is_valid(text, num))
// 		cout<< "valid"; 
// 		else 
// 		cout<< "is not valid"; 
	
// }




bool validity(string s, int n){
	int cnt =0; 
	for(int i=0; i<s.size(); i++){
		if(s[i]-'0'>=0 and s[i]-'9'<=9)
		cnt++; 
		if (cnt>=n){
			return true ; 
		}
	}
	return false ; 
	
}
int main() {
	string s; 
	int n; 
	cin>> s >> n; 
	if (validity(s,n)){
		cout<< "the number is valid" ; 
	} else {
		cout<< "the number is not valid" ; 
	}
	return 0 ; 
}