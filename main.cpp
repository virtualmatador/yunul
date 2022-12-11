#include <iostream>
#include <fstream>

int main(int argc, const char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: yunul <dir to app>" << std::endl;
        return -1;
    }
    std::string main_file_name = argv[1];
    if (main_file_name.back() != '/')
    {
        main_file_name += '/';
    }
    main_file_name += "main.ynl";
    std::ifstream main_file{ main_file_name };
    std::string word;
    while (main_file >> word)
    {
        std::cout << word << std::endl;
    }
    return 0;
}
