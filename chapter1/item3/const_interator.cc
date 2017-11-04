#include <vector>
#include <iostream>

int main() {
	std::vector<int> vec;
	for (int i = 1; i <= 5; ++i)
		vec.push_back(i);
	const std::vector<int>::iterator iter = vec.begin();	// T * const
	*iter = 10;
	//++iter;

	std::vector<int>::const_iterator citer = vec.begin();	// const T *
	//*iter = 11;
	++citer;
	return 0;
}
