#include<iostream>
using namespace std;

int kitu_so(char c){
	return c - 'A';	
}

char so_kitu(int n){
	return n + 'A';
}

main(){
	string s;
	int a, a1, b, C, P;
	cout <<"Nhap chuoi P : "; getline(cin, s);
	do{
		cout << "Nhap gia tri cua a : ";
		cin >> a;
	} while((a <= 0) or (a > 25) or (a == 13) or a % 2 == 0);
	cout << "Nhap b : "; cin >> b;
	
	//Ma hoa 
	for(int i = 0; i < s.length(); i++){
		P = kitu_so(s[i]);
		C = (a*P + b)%26;
		s[i] = so_kitu(C);
	}
	cout <<"Chuoi sau khi ma hoa  : " << s << endl;
	
	//Giai ma 
	for(int i = 1; i <= 25; i++)
		if(i * a % 26 == 1)
			a1 = i;
	
	for(int i = 0; i < s.length(); i++){
		C = kitu_so(s[i]);
		P = (a1*(C - b + 26))%26;
		s[i] = so_kitu(P);
	}
	cout << "Chuoi sau khi giai ma : " << s;
}
