#ifndef _F_
#define _F_

#include "E.h"

#include <string>
#include <memory>

namespace constructroTest
	{

	class F : public virtual E {


	public:
		static const uint16_t fixedLength;

		explicit F();
		virtual ~F();

protected:
		shared_ptr<F> shared_from_this()
			{
			return dynamic_pointer_cast<F>(E::shared_from_this());
			}
		};

	}


#endif	//#ifndef _F_
