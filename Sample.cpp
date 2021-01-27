#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

using namespace std;
int main(int argc, char *argv[])
{
	Vector3 n_v(0, 0, 0);
	Vector3 v[2];
	for (auto i = 0; i < 2; i++) {
		v[i].x += i * 1.0;
		v[i].y -= i * 2.0;
		v[i].z *= i * 3.0;

		cout << v[i].x << endl;
		cout << v[i].y << endl;
		cout << v[i].z << endl;
	}

	if (v[0] == n_v) {
		cout << "‚¤‚ñ‚¿" << endl;
	}

	return 0;
}