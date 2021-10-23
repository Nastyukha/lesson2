#include <iostream>
#include <cmath>
using namespace std;
main(){
	float x, y;
	cin >> x;
	if (x < -7) cout << "function isnot declared";
	else if (x >= -7 && x < -3) cout << "3";
	else if (x >= -3 && x <= 3) cout << 3 - sqrt(9 - x*x);
	else if (x > 3 && x < 6) cout << 9 - 2*x;
	else if (x >= 6 && x <= 11) cout << x - 9;
	else cout << "function isnot declared";
}
