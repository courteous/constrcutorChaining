
#include <iostream>
#include <string>
#include <memory>


#include "../src/E.h"
#include "../src/F.h"


using namespace std;
using namespace constructroTest;

int main() {


	shared_ptr<E> eInstance = make_shared<E>();

	cout << "####################################################" << endl;

	shared_ptr<F> fInstance = make_shared<F>();


	return 0;
}



