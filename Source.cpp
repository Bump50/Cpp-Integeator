#include <functional>
using namespace std;


double integrator(function<double(double)> func, double x1, double x2, int increments)
{
	double ans = 0.0, delta=(x2-x1)/((double) increments);

	for (int i = 0; i <increments; i++) {

		ans += (func(x1) + func(x1 + delta)) * delta / 2; //= func(x1) * delta + ((func(x1 + delta) - func(x1)) * delta) / 2;
		x1 += delta;
	}

	return ans;
	

}

