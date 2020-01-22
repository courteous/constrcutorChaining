#include "C.h"

#include "B.h"


using namespace std;


namespace constructroTest
	{


	C::C() : B()
		{
			cout << "default C constructor called"  << endl;

		}

	C::C(uint32_t cArgument1) : B()
		{

		cout << "parameterized C - constructor : " << cArgument1  << endl;
		}


	}
