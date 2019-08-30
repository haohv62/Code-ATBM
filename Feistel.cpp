#include<iostream>
using namespace std;

char F(char R, char K){
	return R + K;
}

string MaHoa(char P0, char P1, char k){
	string C = "xx";
	char K[3], L[3], R[3];
	K[0] = k;
	L[0] = P1;
	R[0] = P0;
	for(int i = 1; i <= 2; i++){
		K[i] = K[0] << i;
		R[i] = L[i - 1] ^ F(R[i-1], K[i]);
		L[i] = R[i - 1];
	}
	C[0] = L[2];
	C[1] = R[2];
	return C;
}

string GiaiMa(char C0, char C1, char k){
	string P = "xx";
	char K[3], L[3], R[3];
	K[0] = k;
	L[2] = C0;
	R[2] = C1;
	for(int i = 2; i >= 1; i--){
		K[i] = K[0] << i;
		L[i-1] = R[i] ^ F(L[i], K[i]);
		R[i-1] = L[i];
	}
	P[0] = R[0];
	P[1] = L[0];
	return P;	
	
}
main(){
	string P, C, P2;
	char K;
	cout << "Nhap chuoi plaintext : "; getline(cin, P);
	cout << "Nhap khoa K : "; cin >> K;
	if(P.size()%2!=0) P.push_back('x');

	for(int i = 0; i < P.size(); i = i +2)
		C = C + MaHoa(P[i], P[i+1], K);
	cout << "Chuoi ma hoa : " << C << endl;
	
	for(int i = 0; i < C.size(); i = i +2)
		P2 = P2 + GiaiMa(C[i], C[i+1], K);
	cout << "Chuoi giai ma : " << P2;		

}
