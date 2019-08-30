#include<iostream>
using namespace std;

main(){
	string s, s1, s2;
	cout << "Nhap chuoi : "; getline(cin, s);
	
	//Ma hoa
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0) s1 += s[i];
		else s2 += s[i]; 
	}
	s = s1 + s2;
	cout << "Chuoi sau ma hoa : " << s <<endl;
	
	// Giai ma  
	string P;
	if(s.size() % 2 == 0){
		for(int i = 0; i < s.size()/2; i++)
			P = P + s[i] + s[i + s.size()/2];
	} else{
		for(int i = 0; i < s.size()/2; i++)
			P = P + s[i] + s[i + s.size()/2 + 1];
		P = P + s[s.size()/2];
	}
	
	cout << "Chuoi sau khi giai ma : " << P;

}
