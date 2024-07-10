#include "Header.h"
#include <iostream>
using namespace std;

    int main() {
		
		Employee employee1(1,"abc");
		employee1.display();
		Employee employee2(2,"xyz");
		employee2.display();
		Employee combinedEmployee = employee1 + employee2;
		combinedEmployee.display();
			

			system("pause");
			return 0;
		}

