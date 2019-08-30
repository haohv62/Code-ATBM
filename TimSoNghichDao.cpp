#include<iostream>
using namespace std;
main(){
	//Code tim nghich dao cua a trong vành 26
	int a = 3;
	for(int i = 1; i < 26; i++){
		if((i * a % 26) == 1){
			cout << i;
			break;
		}
	}
}
