#include "lib/setup.h"


using namespace setup;

struct {
  std::string HOME, PREFIX;
}PATH;

  
int main(int argc , char ** argv){
     PATH.HOME = "/data/data/com.termux/files/home";
     PATH.PREFIX = "/data/data/com.termux/files/usr";
     setup_demon root;
     int res = root.check_exists(PATH.HOME, "main.cpp");
     std::cout<<res<<std::endl;
   return 0;
}
