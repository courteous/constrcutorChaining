#include <iostream>
#include "A.h"


using namespace std;

namespace constructroTest {


A::~A() {
}


A::A() {

	cout  << "default BasePrimitive constructor called" << endl;
}

A::A(shared_ptr<A> aArgument) {

	cout  << "parameter BasePrimitive constructor called : " << aArgument << endl;
	}

}





