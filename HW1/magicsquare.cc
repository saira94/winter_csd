// magicsquare for odd number 
#include <iostream>
#include <vector>

using namespace std;


void magicsquare(vector<vector<int> > &matrix, int n);

int main(int argc; char* argv[]) {
	int n;
	cout << "enter an odd number";
	cin  >> n;
	vector<vector<int> > matrix(n, vector<int> (n,0));:
	magicsquare(matrix, n);

	return 0;

}


void magicsquare(vector<vector<int> > &matrix, int n) {
	int nsqr = n * n;
	// start position with 1
	int i=0;
	int j= n/2;
	for(int k=1, k<=nsqr; k++) {
		matrix[i][j]= k;
		i--;
		j++;
		if(k%n == 0){ // if the place is aldready taken
			i = i+2;
			--j;
		}
		else {
			if(j==n)  // if i or j value is outsid of box
				j -= n;  
			else if(i<0)
				i +=n;
		}
	}

	//printing
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <n; j++) {
			cout << matrix[i][j] <<"  ";	}
		cout << endl;

   }
}
