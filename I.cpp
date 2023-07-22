#include <iostream>
using namespace std;

//string upper_case(string text){
//    string ans = "";
//    for(int i = 0; i < text.size(); i++){
//        if(i % 2 == 0 and text[i] >= 'a' and text[i] <= 'z')
//	 ans += text[i] - ' ';
//        else ans += text[i]; 
//    }
//    return ans; 
//}
//
//int main(){
//    string s;
//	cin >> s;
//    cout << upper_case(s); 
//}


/////another method of solving the above task 


//string lower_case(string text){
//	string ans=""; 
//	for(int i=0; i<text.size(); i++){
//		if (i%2==0 and text[i]>='a' and text[i]<='z')
//		ans+= text[i] - 32; 
//		else 
//		ans+= text[i]; 
//	}
//	return ans; 
//}
//int main() {
//	string text; 
//	cin>> text; 
//	cout<< lower_case(text); 
//}





//string upper(string text){
//	string ans= ""; 
//	for(int i=0; i<text.size(); i++){
//		if (i%2==0 and text[i]>='a' and text[i]<='z')
//		ans+= text[i]-32; 
//		else 
//		ans+=  text[i]; 
//	}
//	return ans; 
//}
//int main() {
//	string text;
//	 cin>> text; 
//	 cout<< upper(text); 
//}





// string upper_case(string lowwer){
// 	string ans= ""; 
// 	for(int i=0; i<lowwer.size(); i++){
// 		if (i%2==0 )
// 		ans+= lowwer[i]-32; 
// 		else 
// 		ans+= lowwer[i]; 
// 	}
// 	return ans; 
// }
// int main() {
// 	string lowwer; 
// 	cin>> lowwer; 
// 	cout<< upper_case(lowwer); 
// }






string upper_lower(string s){
	string done = "" ; 
	for(int i=0; i<s.size(); i++){
		if (i%2==0){
			done+= s[i]-32; 
		}else {
			done+=s[i] ; 
		}
	} 
	return done ; 
}
int main() {
	string s ;
	cin>> s; 
    cout<< upper_lower(s) ; 
	return 0; 
}