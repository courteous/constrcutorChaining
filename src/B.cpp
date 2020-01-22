
#include "B.h"


namespace constructroTest
	{


	B::B() : A()
		{
			cout  << "default B constructor called" << endl;
		}

	B::B(shared_ptr<B> bArgument) : A(bArgument)
		{
		cout  << " parameterized B constructor called : " << bArgument << endl;
		}

	B::~B()
		{

		}


}
