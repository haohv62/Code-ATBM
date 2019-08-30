#include<iostream>
using namespace std;
int kitu_so(char c){
	return c - 'A';	
}

char so_kitu(int n){
	return n + 'A';
}

main() {
	string s, s1;
	int a, a1, b, P, C;
	int A[]={1, 3, 5, 7, 9, 11, 15, 17, 19, 21, 23, 25};
	cout << "Nhap chuoi bi ma hoa : "; getline(cin, s);
	s1 = s;
	
	//be khoa Affine su dung BruteForce
	for(int j = 0; j < 12; j++)
	
		for(b = 0; b < 26; b++){
			a = A[j];
			
			for(int i =1; i<= 25; i++){
				if(i*a%26 == 1) a1 = i;
			}	
			
			for(int i = 0; i < s.length(); i++){
				C = kitu_so(s[i]);
				P = (a1*(C - b + 26))%26;
				s1[i] = so_kitu(P);
			}
		cout << "a : " << a << "\t b : " << b << "\t Chuoi giai ma : " << s1 << endl;	
		}	
		
}
