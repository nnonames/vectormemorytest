#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

#define Y 5 // ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
#define X 5 // →→→→→→→→→→→→→→→→→→→→→

using namespace std;
const int Max = X * Y;

int main() {

	vector <int> vecint(Max);

	for (int i = 0; ; ) {
		if (i == Max) { break; }
		vecint[i] = i;
		cout << "vecint[" << vecint[i] << "] = [" << i << "]" << endl;
		i = i + 1;
	}

	cout << endl << "초기 capacity : " << vecint.capacity() << endl;
	cout << "초기 사이즈 : " << vecint.size() << endl << endl;

	for (int i = 0; ; ) {
		if (i >= vecint.size()) { break; }
		//if (i >= vecint.size()) { break; }
		vecint.erase(vecint.begin() + i);
		//cout << "현재" << i << " = " << vecint[i - 1] << endl;
		i = vecint.size() - (vecint.size() - 1);
	}

	cout << "erase 후 capacity : " << vecint.capacity() << endl;
	cout << "erase 후 사이즈 : " << vecint.size() << endl;

	cout << endl << "reserve 후 capacity : " << vecint.capacity() << endl;
	cout << "reserve 후 사이즈 : " << vecint.size() << endl;

	vecint.shrink_to_fit();
	cout << endl << "shrink_to_fit 후 capacity : " << vecint.capacity() << endl;
	cout << "shrink_to_fit 후 사이즈 : " << vecint.size() << endl;

}
