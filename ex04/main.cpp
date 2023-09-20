#include <string>
#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::fstream reader;
    reader.open(filename.c_str(), std::ios::in);
    if (!reader.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    std::string line;
    filename.append(".replace");
    std::ofstream myFile (filename.c_str());
    if (!myFile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    std::size_t found;
    while (std::getline(reader, line))
    {
        found = line.find(s1);
        while(found != std::string::npos)
        {
            line.erase(found, s1.length());
            line.insert(found, s2);
            found = line.find(s1, found + s2.length());
        }

        myFile << line << std::endl;
    }
    reader.close();
    myFile.close();
    return 0;
}
