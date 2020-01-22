
#include "E.h"


#include "D.h"

namespace constructroTest
	{

	const uint16_t E::fixedLength = 5;


	E::E() : D(fixedLength)
		{

		cout << "default E constructor called"  << endl;

		}


	E::~E()
		{

		}


	}
