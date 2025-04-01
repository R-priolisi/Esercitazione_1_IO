#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
unsigned int sum_values(unsigned int N)//passo una copia di N ; (unsigned int &N) passa proprio N , la sua referenza
{
	return N*(N+1)*(2*N+1)/6;
}
int main()
{
    std::cout << "Il programma sta funzionando correttamente!" << std::endl;
	std::ifstream file("data.txt");// fstr.open("data.txt);
	    if (file.fail()) { 
        std::cerr << "Impossibile aprire il file!" << std::endl;
        return 1; 
    }
	
	std::string line;
	std::getline(file,line);
	unsigned int sum=0;
	unsigned int val; //raddoppio il numero di interi positivi che posso memorizzare
	unsigned int n=0;
	while (file >> val) 
	{
		std::cout << "Numero letto: " << val << std::endl;
        sum+= val*val;
		n++;
    }
	unsigned int S=sum_values(n);
	std::cout<<"sum="<<sum<<std::endl;
	std::cout<<"S="<<S<<std::endl;
	
    return 0;
}
