#include <bits/stdc++.h>
using namespace std;

//void Ticket(string s){
//    int sum = 0;
//    for(int i = 0; i < s.size(); i++) 
//	sum += s[i] - '0';
//    if(sum % (s[s.size()-1] - '0') == 0) 
//	cout << "Yes";
//    else 
//	cout << "No";
//}
//
//	int main(){
//	string s;
//	cin >> s;	
//	Ticket(s);
//}


// void lucky(string s){
// 	int sum=0 ; 
// 	for(int i=0; i<s.size(); i++)
// 	sum+= s[i]-'0'; 
// 	if (sum% (s[s.size()-1]-'0')==0)
// 	cout<< "yes"; 
// 	else 
// 	cout<< "no"; 
// }
// int main() {
// 	string s; 
// 	cin>> s; 
// 	lucky(s); 
// }




void lucky(string s){
	int sum =0;
	for(int i=0; i<s.size(); i++) 
		sum+= s[i]-'0' ; 
		if (sum%(s[s.size()-1]-'0')==0)
			cout<< "yes";  
		else 
			cout<< "no" ; 
		
	
	

}
int main() {
	string s ;
	cin>> s; 
	lucky(s);
	return 0; 
}