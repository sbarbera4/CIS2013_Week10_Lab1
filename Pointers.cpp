#include <iostream>
#include <cstring>
using namespace std;

int main()
{

	int len;
	int cont = 1;

	while (cont == true)
	{

		cout << "how long do you want your array?" << endl;
		cin >> len;

		int *a;
		a = new int[len];

		for (int i = 0, i < len; i++)
		{
			cout << "int number " << i << " should be: ";
			cin >> a[i];
		}

		cout << endl << "Your list of numbers is: ";

		for (int i = 0, i < len; i++)
		{
			cout << a[x] << endl;
		}

		cout << "do you want to continue; Y=1, N=0 :" << endl;
		cin >> cont;

		delete[] a;
	}


	/*
	int v1;
	int v2;
	int *p1;
	int *p2;

	v1 = 22;
	v2 = 33;

	p1 = &v1;
	p2 = &v2;

	p1 = p2;

	v1 = 44;
	v2 = 55;

	p1 = &v1;

	cout << " p1 is: " << *p1 << endl;
	cout << " p2 is: " << *p2 << endl;
	cout << " v1 is: " << v1 << endl;
	cout << " v2 is: " << v2 << endl;
	*/
	return 0;
}
