#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R;
	double x;
	double xp;
	double xk;
	double dx;
	double y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "-----------------------" << endl;
	cout << setw(10) << " x " << "|"
		<< setw(10) << " y " << "|" << endl;
	cout << "-----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -8 - R)
			y = -R;
		else
			if (-8 - R < x && x <= -8 + R)
				y = sqrt(pow(R, 2) - pow(x, 2) - 16 * x - 64) - R;
			else
				if (-8 + R < x && x <= 2)
					y = (-R) + ((2 + R) / (10 - R)) * (x + 8 - R);
				else
					if (2 < x && x <= 6)
						y = 0;
					else
						y = pow(x - 6, 2);
		cout << "|" << setw(10) << setprecision(4) << x
			<< "|" << setw(10) << setprecision(5) << y
			<< "|" << endl;
		x += dx;
	}
	cout << "-----------------------" << endl;
	return 0;
}