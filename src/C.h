#ifndef _C_
#define _C_


#include <string>
#include <vector>
#include <memory>

#include "B.h"

using namespace std;

namespace constructroTest
	{

	class C : public virtual B
		{


	public:
		explicit C();

		explicit C(uint32_t cArgument1);



protected:
//		shared_ptr<C> shared_from_this()
//			{
//			return dynamic_pointer_cast<C>(B::shared_from_this());
//			}





		};

	}


#endif	//#ifndef _C_
