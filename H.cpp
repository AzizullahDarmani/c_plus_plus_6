#include <iostream>
using namespace std;

//bool Valider(string text){
//    for(int i = 0; i < text.size(); i++){
//        if(text[i] % 2 == 1) 


	//The condition text[i]%2==1 in the checker function is checking if 
	//the character at the i-th index of the text string is an odd digit 
	//or not.

	//In C++, the % operator is the modulus operator, which returns 
	//the remainder of a division operation. When a number is divided 
	//by 2, if the remainder is 1, it means that the number is an odd 
	//number, because odd numbers can be expressed in the form 2n+1, 
	//where n is an integer.
	
	
//		return false;
//    }
//    return true;
//}
//
//int main(){
//    string s; cin >> s;
//    cout << (Valider(s) ? "Valid" : "Not valid");
//}






//bool valide(string text){
//	for(int i=0; i<text.size(); i++){
//		if (text[i]%2==1)
//		return false; 
//	}
//	return true ; 
//}
//int main() {
//	string text ; 
//	cin>> text; 
//	if (valide(text)){
//		cout<< "valide"; 
//	}else {
//		cout<< "not valide"; 
//	}
//}



bool checking(string s){
	for(int i=0; i<s.size(); i++){
		if (s[i]%2==1)
		return false; 
	}
	return true ; 
}
int main() {
	string s ;
	cin>> s; 
	if (checking(s)){
		cout<< "the number is valid" ; 
	}else {
		cout<< "the number is not valid" ; 
	}
	return 0; 
}






//bool is_valid(string number){
//	for(int i=0; i<number.size(); i++){
//		if (number[i]%2==1 and number[i]-'0'>=0 and number[i]-'0'<=9)
//		return false ; 
//	}
//	return true; 
//}
//int main() {
//	string number; 
//	cin>> number; 
//	if (is_valid(number)) {
//	cout<< "valid"; 
//	}
//	else {
//	cout<< " not valid";  
//	}
//	return 0; 
//}





// bool is_valid(string number){
// 	for(int i=0; i<number.size(); i++){
// 		if (number[i]%2==1 and number[i]-'0'>=0 and number[i]-'0'<=9)
// 		return false ; 
// 	}
// 	return true; 
// }
// int main() {
// 	string number; 
// 	cin>> number; 
// 	if (is_valid(number)) {
// 	cout<< "valid"; 
// 	}
// 	else {
// 	cout<< " not valid";  
// 	}
// 	return 0; 
// }







	// The expression s[i] % 2 == 1 in the if statement is used to check if the current character s[i] is an odd number.
	// The % operator is the modulus operator, which returns the remainder of the division of its left operand by its right 
	// operand. In this case, when s[i] is divided by 2, if the remainder is 1, then s[i] is an odd number.
	// Therefore, the if statement checks if the current character s[i] is a digit between 0 and 9 (inclusive) 
	// and if it is an odd number. If both conditions are true, it prints "it is not valid" and returns from the function.
	// Otherwise, if the loop completes without finding any invalid character, it prints "is valid".


// void checking (string s){
// 	for(int i=0; i<s.size(); i++){
// 		if (s[i]-'0'>=0 and s[i]-'9'<=9 and s[i]%2==1){
// 			cout<< "it is not valid"; 
// 			return; 
// 		}
// 	}
// 	cout<< "is vlaid" ; 
// }
// int main() {
// 	string s ;
// 	cin>> s; 
// 	checking(s) ; 
// 	return 0; 
// }




// void checking (string s){
// 	for(int i=0; i<s.size(); i++){
// 		if (s[i]-'0'>=0 and s[i]-'9'<=9 and s[i]%2==1){
// 			cout<< "the number is not valid" ; 
// 			return ; 
// 		}
// 	}
// 	cout<< "the number is valid" ; 
// }
// int main() {
// 	string s ;
// 	cin>> s; 
// 	checking(s) ; 
// 	return 0; 
// }