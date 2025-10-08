#include<iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if((a <= (2(b+1))) && (b <= (2(a+1))) && ((c-a) <= (2((d-b) + 1))) && ((d-b) <= (2((c-a) + 1)))){
		cout << "YES" << '\n';
	}
	else{
		cout << "NO" << '\n';
	}
}
