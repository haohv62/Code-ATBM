#include<iostream>
using namespace std;

main(){
	string s;
	int dem  = 0;
	cout <<"Nhap chuoi s : ";
	getline(cin, s);
	for(int i =0; i < s.length(); i++)
		if(s[0] == s[i])
			dem ++;
	
	cout<< "Ki tu dau tien cua s xuat hien : " << dem << "lan";
}
