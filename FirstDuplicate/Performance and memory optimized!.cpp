#include <vector>
#include <iostream>

using namespace std;

int firstDuplicate(std::vector<int> a) {

	for (double item : a) {
		if (a[abs(item) - 1]<0) {
			return abs(item);
		}
		a[abs(item) - 1] = -a[abs(item) - 1];
	}
	return -1;
}

int main()
{
	std::vector<int> a = { 1,2,3,3,8,7,6,9 };
	cout << firstDuplicate(a) << endl;
}



