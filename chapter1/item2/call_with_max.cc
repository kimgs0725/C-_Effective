#include <iostream>
#define INLINE

void f(int p) {
	std::cout << p << std::endl;
}

#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))

inline void callWithMax(const int& a, const int& b) {
	f(a > b ? a : b);
}

int main() {
	int a = 7, b = 4;
#ifdef INLINE
	callWithMax(++a, b);
#else
	CALL_WITH_MAX(++a, b);
#endif
	return 0;
}
