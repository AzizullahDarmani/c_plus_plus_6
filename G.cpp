#include <iostream>
using namespace std;

//string vowel(string text){
//    string ans = "";
//    for(int i = 0; i < text.size(); i++){
//        int cnt = 0;
//        for(int j = 0; j < 10; j++){
//            if(text[i] == "aeiouAEIOU"[j]) cnt++;
//        }
//        if(cnt == 0) ans += text[i];
//    }
//    return ans;
//}
//
//int main(){
//    string s; 
//	getline(cin, s);
//    cout << vowel(s);
//}




//string vowel(string text){
//	string empty =""; 
//	string ans= "aeiouAEIOU";
//	for(int i=0; i<text.size(); i++){
//		int cnt= 0; 
//		for(int j=0; j<ans.size(); j++){
//			if (text[i]==ans[j]) 
//			cnt++; 
//		}
//		if (cnt==0)
//		cout<< text[i]; 
//	}
//	return empty; 
//}
//int main() {
//	string text; 
//	getline(cin, text); 
//	cout<< vowel(text); 
//}


//string remo_vowel(string text){
//	string vowel = "aeiouAEIOU"; 
//	string empty= ""; 
//	for(int i=0; i<text.size(); i++){
//		int m=0; 
//		for(int j=0; j<vowel.size(); j++){
//			if (text[i]==vowel[j])
//			m++; 
//		}
//		if (m==0)
//		cout<< text[i]; 
//	}
//	return empty; 
//}
//int main() {
//	string text; 
//	getline(cin,text); 
//	cout<< remo_vowel(text); 
//}


// void remo_vowel(string text){
// 	string vowel = "aeiouAEIOU"; 
// 	string empty= ""; 
// 	for(int i=0; i<text.size(); i++){
// 		int m=0; 
// 		for(int j=0; j<vowel.size(); j++){
// 			if (text[i]==vowel[j])
// 			m++; 
// 		}
// 		if (m==0)
// 		cout<< text[i]; 
// 		else 
// 		cout<< empty; 
// 	}
	
// }
// int main() {
// 	string text; 
// 	getline(cin, text) ; 
// 	remo_vowel(text); 
// }




void is_vowel(string s){
	string vowel= "aeiou"; 
	string extra = "" ; 
	for(int i=0; i<s.size(); i++){
		int m=0; 
		for(int j=0; j<vowel.size(); j++){
			if (s[i]==vowel[j])
			m++; 
		}
		if (m==0){
		cout<< s[i] ; 
	}else {
		cout<< extra; 
	}
	}
	
}
int main() {
	string s ;
	getline(cin, s) ;
	is_vowel(s) ; 
	return 0; 
}