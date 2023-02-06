#include "setup.h"

//Para cambiar de directorio 
using std::__fs::filesystem::current_path;
using std::cout; using std::cin;
using std::endl; using std::vector;
using std::string;
using std::__fs::filesystem::directory_iterator;
using std::__fs::filesystem::exists;
using std::__fs::filesystem::is_directory;
using std::__fs::filesystem::is_regular_file;

void setup::setup_demon::download(const char  *URL_str){
   //reget
   std::regex pattern("");
   //inicia una secion de curl  
   CURL * curl = curl_easy_init();
   if (curl) {
      CURLcode res;
      char outfilename[FILENAME_MAX] = "./p" ;
      FILE *fp = fopen(outfilename, "wb");
      //Especifica una URL para optener 
      curl_easy_setopt(curl, CURLOPT_URL, URL_str);
      curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
      res = curl_easy_perform(curl);
       curl_easy_cleanup(curl);
      if (res != CURLE_OK) {
         std::cout<<"Error Url\n";
         curl_easy_strerror(res);
      }  
   }
};

void setup::setup_demon::IA_file(std::string PATH){
  int pid = fork();
   if (pid == 0) {
    //  
      for (const auto &file : directory_iterator(PATH)) {
         std::cout<<file.path()<<std::endl; 
      } 
   }
}

bool setup::setup_demon::check_exists(std::string PATH, std::string files){
    
   std::vector<std::string>file_to_check;
   file_to_check.push_back(files);

   current_path(PATH);//Cambiar de dir 
   for (const auto &file : file_to_check) {
       if(exists(file)) {
         if (is_directory(file))return 1;
         //if (is_regular_file(file))return 2 ;//file 
      }
   }
   return 0;
   };


