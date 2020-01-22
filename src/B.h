#ifndef _B_
#define _B_

#include <memory>
#include <string>
#include <vector>


#include "A.h"

namespace constructroTest
	{

	class B : public virtual A
		{

	public:
		explicit B();
		virtual ~B();

		explicit B(shared_ptr<B> baseBlock);

protected:
		shared_ptr<B> shared_from_this() 	{
			return dynamic_pointer_cast<B>(A::shared_from_this());
			}


		}; // end of classs


	}
#endif	//#ifndef _B_
