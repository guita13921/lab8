#include<iostream>
using namespace std;

char before(char x){
if(x != '0'){	
	if(x <= 90){
		if(x == 65){
			x += 25;
		}else{
			x -= 1;
		}
	}else{
		x = '0';}
}else{
}
return x;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
