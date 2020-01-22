#include <iostream>
#include "A.h"


using namespace std;

namespace constructroTest {


A::~A() {
}


A::A() {

	cout  << "default A constructor called" << endl;
}

A::A(shared_ptr<A> aArgument) {

	cout  << "parameter A constructor called : " << aArgument << endl;
	}

}





