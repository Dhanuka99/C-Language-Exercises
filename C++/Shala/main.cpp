#include <iostream>
#include "University.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    University *uni;
    uni = new University(501,502,503);
    uni->displayDetails();
	uni->~University();
    return 0;
}
