#include "../includes/sed.hpp"

Sed:: Sed( void )
{
    // constructor
}

Sed::~Sed( void ) 
{
    // destructor
}

void    Sed::sedReplace( std::string file, std::string str1, std::string str2 )
{
    std::string     str, buff, fileName;
    std::size_t     found(0);
    
    std::ifstream   inFile;
    inFile.open(file.c_str(), std::ifstream::in);
    if (inFile.good() == false)
    {
        std::cout << "Error: can't open/read the file"  << std::endl;
        return;
    }
    fileName = file += ".replace";
    std::ofstream outFile;
    outFile.open(fileName.c_str(),  std::ofstream::out | std::ofstream::app);
    if (outFile.good() == false)
    {
        std::cout << "Error: can't create file" << std::endl;
        return;
    }
    while (std::getline(inFile, str))
    {
        buff.append( str.append("\n"));
    } 
    while ((found = buff.find(str1)) != std::string::npos)
    {
        buff.erase(found, str1.length());
		buff.insert(found, str2);
    }
    inFile.close();
    outFile << buff;
    outFile.close();
}