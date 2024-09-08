#include <iostream>
using namespace std;


void recursiveGame(int numOfDisks, char start, char temp, char final) {
	if (numOfDisks == 1) {
		cout << "Move a disk from peg " << start << " to peg " << final << endl;
	}
	else {
	recursiveGame(numOfDisks - 1, start, final, temp);
	cout << "Move a disk from peg " << start << " to peg " << final << endl;
	recursiveGame(numOfDisks - 1, temp, start, final);
	}


}


int main() {
	int disks;
	char start = 'A';
	char temp = 'B';
	char final = 'C';

	cout << "Enter the starting number of disks: ";
	cin >> disks;

	cout << "\n\n\nFollow the following steps to move 4 disks\n";
	recursiveGame(disks, start, temp, final);

}