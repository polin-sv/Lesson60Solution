#include <iostream>
using namespace std;

int main() {
	int* ptr = new int;

	cout << "before: " << ptr << "--> " << *ptr << endl;

	int** pptr = &ptr;

	**pptr = 10;

	cout << "after: " << ptr << "--> " << *ptr << endl;

	cout << pptr << "-->" << *pptr << endl;

	delete ptr;

	return 0;
}