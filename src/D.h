#ifndef _D_
#define _D_

#include "C.h"
#include <string>
#include <memory>


namespace constructroTest
	{

	class D : public virtual C
		{


	public:
		static const uint16_t fixedLength;


		explicit D();
		virtual ~D();


		explicit D(uint16_t dArgument);


protected:
		shared_ptr<D> shared_from_this()
			{
			return dynamic_pointer_cast<D>(C::shared_from_this());
			}
		};

	}


#endif	//#ifndef _D_
