#include<iostream>
using namespace std;

main(){
	string s; char K;
	cout << "Nhap chuoi s : "; getline(cin, s);
	cout << "Nhap khoa K : "; cin >> K;
	
	//Ma hoa
	for(int i = 0; i < s.size(); i++)
		s[i] = s[i] ^ K;
		
	cout << "Chuoi ma hoa : " << s <<endl;
	
	//Giai ma 
	for(int i = 0; i < s.size(); i++)
		s[i] = s[i] ^ K;
		
	cout << "Chuoi sau khi giai ma : " << s;
		
}
