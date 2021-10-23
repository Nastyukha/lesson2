#include <iostream>
using namespace std;
int main(){
	int n;
	int counter = 0;
	cin >> n;
	double summ = n;
	while (n != 0){
		cin >> n;
		summ += n;
		counter += 1;
	}
	double answer = summ/counter;
	cout << answer;
}
