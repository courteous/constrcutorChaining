#ifndef _E_
#define _E_

#include "D.h"

#include <string>
#include <memory>

namespace constructroTest
	{

	class E : public virtual D
		{

	public:
		static const uint16_t fixedLength;

		explicit E();
		virtual ~E();

protected:
		shared_ptr<E> shared_from_this()
			{
			return dynamic_pointer_cast<E>(D::shared_from_this());
			}
		};

	}

#endif	//#ifndef _E_
