#include <iostream>

template<int N,int M = 0>
struct Sum
{
	static const int value = N + Sum<N-1, (N + M - 1) / 2>::value + Sum<(N + M - 1) / 2, M>::value;
};

template<int N>
struct Sum<N, N>
{
	static const int value = 0;
};
int main()
{
	std::cout << Sum<100>::value << std::endl;
	std::cin.get();
	return 0;
}
