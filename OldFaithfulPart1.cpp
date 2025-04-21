#include <iostream>
#include <fstream> // library which makes a CPP program compatible for analyzing and creating files
#include <string>

int main() {


	std::ifstream file("old_faithful.csv");

	char straightlines[100];

	double entireeruptioncalc = 0.0;

	double entirewaitcalc = 0.0;

	int counterinfo = 0;



	// ^^ set up information to find from the file

	file.getline(straightlines, 100);

	while (straightlines[counterinfo] != ',' && straightlines[counterinfo] != '\0') {


      


	}




}