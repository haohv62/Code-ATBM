#include<iostream>
using namespace std;

int kitu_so(char c){
	return c - 'A';	
}

char so_kitu(int n){
	return n + 'A';
}


main(){
	string s, k;
	int C, P;
	cout << "Nhap chuoi s : "; getline(cin, s);
	cout << "Nhap khoa k : "; getline(cin, k);
	
	//CODE Mahoa
	for(int i = 0; i < s.length(); i++){
		P = kitu_so(s[i]);
		C = P + kitu_so(k[i%k.length()]);
		s[i] = so_kitu(C);
	}
	
	cout << "Chuoi ma hoa : " << s << endl;
	
	//Code giai ma
	for(int i = 0; i < s.length(); i++){
		C = kitu_so(s[i]);
		P = C - kitu_so(k[i%k.length()]); 
		s[i] = so_kitu(P);
	}	
	cout << "Chuoi sau khi giai ma : " << s;
}
