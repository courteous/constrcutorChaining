#ifndef _A_
#define _A_


#include <string>

#include <optional>
#include <memory>
#include <iostream>

using namespace std;

namespace constructroTest {

class A : public enable_shared_from_this<A>
			{
public:

	explicit A();
	virtual ~A();

	explicit A(shared_ptr<A> baseA);


};

}

#endif	//#ifndef _A_
