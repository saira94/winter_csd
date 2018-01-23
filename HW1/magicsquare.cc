// magicsquare for odd number 
#include <iostream>

using namespace std;

int main () {
	int n;
	cout << "enter an odd number";
	cin  >> n;

	// algorithm to have odd sized magic sqaure

	int magicArry [n][n];

// initialize all values with 0;

	for (int i = 0; i < n; i++) 
		for (int j = 0; j <n; j++) {
			magicArry[i][j] = 0;
		}
// start positon with 1
	int nsqr = n * n;
	int i = 0;
  int j = n/2;

	for (int k=1; k <nsqr; k++) {
		magicArry[i][j] = k;
		i--;
		j++;

		if (magicArry[i][j] == 0) {
			i++;
			j;
		}
		else {
			if (j == n)
				j -=n;
			else if (i<0)
				i += n;
		}

	}
	
// printing 
	for(i=0; i<n; i++) {
		for(j=0;j<n;j++)
			cout << magicArry[i][j];
			cout << endl;

	}

	return 0;
}
