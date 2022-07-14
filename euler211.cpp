#include <iostream>
#include <vector>
#include <cmath>

using int_t = long long;
constexpr int_t N{ 64000000 };

inline bool is_square(int_t n)
{
	auto s = static_cast<int_t>(std::sqrt(n));
	return s * s == n;
}

int main()
{
	std::vector<int_t> wsp(N, 0);
	for (int_t n = 1; n < N; ++n)
		for (int_t f = n; f < N; f += n)
			wsp[f] += n * n;
	int_t c{ 0 };
	for (int_t n{ 0 }; n < N; ++n)
		if (is_square(wsp[n]))
			c += n;
	std::cout << c << "\n";
}