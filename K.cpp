#include <iostream>
using namespace std;

//int sum(string text){
//    int digits = 0;
//    for(int i = 0; i < text.size(); i++) 
//	digits += text[i] - '0';

	///In the ASCII character set, the digits 0 to 9 are 
	///represented by consecutive codes from 48 to 57. Therefore, 
	///subtracting the code of the character '0' (which is 48) 
	///from the code of any digit character will result in an 
	//integer value corresponding to that digit.
	
	
//    return digits;
//}
//
//int main(){
//    string s; 
//	cin >> s;
//    cout << sum(s);
//}






// int count(string digit){
// 	int sum=0; 
// 	for(int i=0; i<digit.size(); i++)
// 		sum+=digit[i]-'0'; 
// 		return sum; 
	
// }
// int main() {
// 	string digit ; 
// 	cin>> digit ; 
// 	cout<< count(digit); 
// }




int sum_of_digit(string s){
	int sum=0; 
	for(int i=0; i<s.size(); i++){
		sum+= s[i]-'0' ; 
		
	}
	return sum ; 
}
int main() {
	string s ;
	cin>> s; 
	cout<< sum_of_digit(s) ; 
	return 0; 
}



