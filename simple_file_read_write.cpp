#include <fstream>
#include <iostream>

int write_file()
{
    bool error = 0;
	std::ofstream myfile;
    myfile.open ("my_file.txt");
	if (myfile.is_open())
	{
		myfile << "1,2,3\n" ;
		myfile.close();
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
		error = 1;
	}
    return error;
}

int read_file()
{
    int error = 0;
	std::ifstream myfile;
    myfile.open ("my_file.txt");
	if (myfile.is_open())
	{
		double a,b,c;
		char comma;
		myfile >> a >> comma >> b >> comma >> c;
		std::cout << " I got this: " <<  a << " --- " << b << " --- " << c << std::endl;
		myfile.close();
	}
	else
	{

		std::cout << "Error opening file" << std::endl;
		error = 1;
	}
	return error;
}

int main()
{
	int error = 0;	
	error = write_file();
	if (!error)
	{	
		read_file();
	}
	return error;
}

