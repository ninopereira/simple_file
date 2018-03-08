#include <fstream>
#include <iostream>

void write_file()
{
    std::ofstream myfile;
    myfile.open ("my_file.txt");
    myfile << "1,2,3\n" ;
    myfile.close();
}

void read_file()
{
    std::ifstream myfile;
    myfile.open ("my_file.txt");
    double a,b,c;
    char comma;
    myfile >> a >> comma >> b >> comma >> c;
    std::cout << " I got this: " <<  a << " --- " << b << " --- " << c << std::endl;
    myfile.close();
}

int main()
{
	write_file();
	read_file();
}

