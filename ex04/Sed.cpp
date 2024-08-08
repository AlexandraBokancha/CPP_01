#include "Sed.hpp"

Sed::Sed( std::string filename ){
    this->_inFile = filename;
    std::cout << filename << " received " << std::endl;
    this->_outFile = this->_inFile + ".replace";
    std::cout << "oufile name is: " << this->_outFile << std::endl;
}


// npos = until the end of the string
// std::string::replace is forbidden 

void    Sed::replace( std::string searchWord, std::string replaceWord )
{
    std::ifstream   ifs(_inFile.c_str());
    std::ofstream   ofs(_outFile.c_str());
    std::string     line;
    int             pos;

    if (ifs.is_open() && ofs.is_open())
    {
        std::cout << "File is accepted. "; \
        std::cout << "Replacement process." << std::endl;
        while (std::getline(ifs, line))
        {
            pos = line.find(searchWord);
            while (pos != std::string::npos)
                // replace
            ofs << line << std::endl;
        }
        ifs.close();
        ofs.close();
    }
    else
    {
        std::cerr << "error: cannot read a file "  << "[" << _inFile << "]" << std::endl;
        return;
    }
}

Sed::~Sed( void ){
    return ; 
}