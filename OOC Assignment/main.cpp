#include <iostream>
#include "University.h"
#include "ClassRoom.h"


int main() {
	University *myuni;
	myuni = new University(101,102);
	myuni->displayClassRoom();
	return 0;
}
