#include <bits/stdc++.h>
using namespace std;


long long ExtendedEuclidAlgo(
	long long a, long long b,
	long long& x, long long& y)
{
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	else {

		long long x1, y1;
		long long gcd
			= ExtendedEuclidAlgo(b, a % b, x1, y1);

		x = y1;
		y = x1 - floor(a / b) * y1;

		return gcd;
	}
}


void linearCongruence(long long A,
					long long B,
					long long N)
{
	A = A % N;
	B = B % N;

	long long u = 0, v = 0;
	long long d = ExtendedEuclidAlgo(A, N, u, v);

	if (B % d != 0) {
		cout << -1 << endl;
		return;
	}

	long long x0 = (u * (B / d)) % N;
	if (x0 < 0)
		x0 += N;


	for (long long i = 0; i <= d - 1; i++)
		cout << (x0 + i * (N / d)) % N << " ";
}

int main()
{
	long long A = 15;
	long long B = 9;
	long long N = 18;

	linearCongruence(A, B, N);

	return 0;
}
