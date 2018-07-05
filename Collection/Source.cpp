#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;


vector<int> vint(int capacity) {
	vector<int> myVec(capacity);
	for (int i = 0; i < myVec.capacity; i++) myVec[i] = rand();
	return myVec;
}

vector<char> vchar(int capacity) {
	vector<char> myVec(capacity);
	for (int i = 0; i < myVec.capacity; i++) myVec[i] = 33 + rand() % 94;
	return myVec;
}

vector<float> vfloat(int capacity) {
	vector<float> myVec(capacity);
	for (int i = 0; i < myVec.capacity; i++) {
		char arr[4];
		for (int j = 0; j < 4; j++) arr[i] = rand();
		myVec[i] = *((float*)arr);
	}
	return myVec;
}

vector<string> vstring(int capacity, int length) {
	vector<string> myVec(capacity);

	for (int i = 0; i < myVec.capacity; i++) {
		for (int j = 0; j < length; j++) myVec[i][j] = 33 + rand() % 94;
	}
	return myVec;
}

int main() {
	// ENTER
	int capacity = 0, flag = 0, length = 4;

	cout << "Enter size: " << endl;
	cin >> capacity;
	cout << "Enter type (1 - int, 2 - char, 3 - float, 4 - string): " << endl;
	cin >> flag;

	// VECTOR

	switch (flag) {
		case 1:
			vint(capacity);
			break;
		case 2:
			vchar(capacity);
			break;
		case 3:
			vfloat(capacity);
			break;
		case 4:
			cout << "Enter string length: " << endl;
			cin >> length;
			vstring(capacity, length);
		default:
			cout << "Smart error handling..";
			exit(404);
	}


	// LIST

	return 0;
}