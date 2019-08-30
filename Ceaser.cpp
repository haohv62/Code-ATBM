// Ceaser Cipher
#include<iostream>
using namespace std;


int kitu_so(char c){
	return c - 'A';	
}

char so_kitu(int n){
	return n + 'A';
}

//Ma hoa
string maHoa(string s, int k){
	int  C, P;
	for(int i = 0; i <= s.length(); i++){		
		P = kitu_so(s[i]);		
		C = (P + k) % 26;
		s[i] = so_kitu(C);
	}
	return s;
}


	//giai ma 
string giaiMa(string s, int k){
	int  C, P;
	for(int i = 0; i <= s.length(); i++){
		C = kitu_so(s[i]);
		P = (C - k + 26) % 26;
		s[i] = so_kitu(P);	
	}
	return s;
}
		
int main(){
	string s;
	int k;
	cout << "Nhap chuoi : "; getline(cin, s);
	cout << "Nhap khoa K : "; cin >> k;	
	
	//ma hoa
	s = maHoa(s, k);
	cout << "Chuoi sau khi ma hoa : " << s << endl;

	//giai ma
	s = giaiMa(s, k);
	cout <<"Chuoi sau khi giai ma : " << s;

	
	//Be khoa Brute-force
//	for(int k = 0; k <=25; k++){
//		cout << "Khoa K : " << k <<endl;		
//		cout << "Chuoi giai ma bang Brute-force : " << giaiMa(s, k) <<endl <<endl;
//
//	}	
//	
}
