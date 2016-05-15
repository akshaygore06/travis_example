#include <iostream>
#include <assert.h>

using namespace std;

int main()
{

	int x = 2;
	int y = 3;
	int z = 0;
	z = x + y;

	assert(z == 5);
	cout << "value of z is 5"<<endl;

	return 0;
}
