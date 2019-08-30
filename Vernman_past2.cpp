#include<iostream>
using namespace std;

main(){
	string s, K;
	cout << "Nhap chuoi s : "; getline(cin, s);
	cout << "Nhap khoa K : "; getline(cin, K);
	
	//ma hoa 
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i] ^ K[j];
		j++;
		if(j ==K.size()) j == 0;
	}
	
	cout << "Chuoi ma hoa : " << s << endl;
	
	//giai ma 
	j = 0;
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i] ^ K[j];
		j++;
		if(j == K.size()) j == 0;
	}
	
	cout << "Chuoi giai hoa : " << s;
	
	
}
