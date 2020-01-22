#include "D.h"
#include "C.h"

namespace constructroTest
	{
	
	const uint16_t D::fixedLength = 4;

	D::D() : C()
		{
		cout << "default D constructor called"  << endl;
		}

	D::~D()
		{

		}


	D::D(uint16_t dArgument) : C(dArgument)
		{
		cout << "parameterized D constructor called : "  << dArgument << endl;

		}

}
