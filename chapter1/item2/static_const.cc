#include <iostream>

class CostEstimate {
 private:
	static const double FudgeFactor;
};

const double CostEstimate::FudgeFactor = 1.35;

int main() {
	return 0;
}
