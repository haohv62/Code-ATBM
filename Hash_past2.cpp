#include<iostream>
using namespace std;
main(){
	string S;
	char H[8] = {0,0,0,0,0,0,0,0};
	cout << "Nhap chuoi : "; getline(cin, S);
	
	while(S.size() % 8 != 0)
		S.push_back('x');
	
	for(int i = 0; i < S.size(); i = i + 8)
		for(int j = 0; j < 8; j ++)
			H[j] = H[j] ^ S[i + j];
		
	cout << "Ma hash cua chuoi : ";
	for(int i = 0; i < 8; i++)
		cout << H[i];
}
