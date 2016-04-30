#include "main1.h"
using namespace std;

int main(int argc, char** argv)
  {
    if(argc!=2)
      {
         cout<<"Проверьте подключен ли файл.\n";
         exit(1);
      }
    class Cars* car=NULL;
    menu(argv[1],car);
  }