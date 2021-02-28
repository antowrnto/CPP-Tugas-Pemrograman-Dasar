#include <iostream>
using namespace std;

int main()
{
	bool benar = true, salah = false;
	
	cout << "1 = true, 0 = false" << endl;
	cout << "benar && benar = " << (benar && benar) << endl;
	cout << "salah || benar  = " << (salah || benar ) << endl;
	cout << "!benar = " << (!benar) << endl;
	
	return 0;
}