/*
Devun Schneider
CS 140
Prof Hawkins
Binomial Coefficients
*/
#include <iostream>;
using namespace std;

int n, k;
int chooseRec(int n, int k) {
	//base case
	if (k == 0 || k == n) {
		return 1;
	}
	else {
		return  chooseRec(n - 1, k - 1) + chooseRec(n - 1, k);
	}
}
int main() {
	cout << "Please enter n: ";
	cin >> n;
	cout << "Please enter k: ";
	cin >> k;

	if (n < k || k < 0) {
		cerr<< "\n\n.......INVALID INPUT\n....Exiting...\n\n";
		exit(-1);
	}
	cout<< "Binomial Coefficient: " + chooseRec(n,k);
}