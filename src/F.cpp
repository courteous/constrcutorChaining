#include "F.h"

namespace constructroTest
	{

	const uint16_t F::fixedLength = E::fixedLength + 1;

	F::F() : E()
		{
		cout << "default F constructor called"  << endl;
		}


	F::~F()
		{

		}

}
