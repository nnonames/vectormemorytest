#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

#define Y 5 // �������������������
#define X 5 // ����������������������

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

	cout << endl << "�ʱ� capacity : " << vecint.capacity() << endl;
	cout << "�ʱ� ������ : " << vecint.size() << endl << endl;

	for (int i = 0; ; ) {
		if (i >= vecint.size()) { break; }
		//if (i >= vecint.size()) { break; }
		vecint.erase(vecint.begin() + i);
		//cout << "����" << i << " = " << vecint[i - 1] << endl;
		i = vecint.size() - (vecint.size() - 1);
	}

	cout << "erase �� capacity : " << vecint.capacity() << endl;
	cout << "erase �� ������ : " << vecint.size() << endl;

	cout << endl << "reserve �� capacity : " << vecint.capacity() << endl;
	cout << "reserve �� ������ : " << vecint.size() << endl;

	vecint.shrink_to_fit();
	cout << endl << "shrink_to_fit �� capacity : " << vecint.capacity() << endl;
	cout << "shrink_to_fit �� ������ : " << vecint.size() << endl;

}
