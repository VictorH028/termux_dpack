#ifndef SETUP
#define SETUP

#include <unistd.h>
#include <iostream>
#include <string>
#include <curl/curl.h>
#include <filesystem>
#include <fstream> 
#include <algorithm>
#include <regex>
#include <vector>

  

namespace setup {
    class setup_demon{
        public:
        void download(const char  *URL_str);
        void IA_file(std::string PATH);           
        //Comprobar que exixte un archivo 
        bool check_exists(std::string PATH, std::string file_to_check);
};
}

#endif
