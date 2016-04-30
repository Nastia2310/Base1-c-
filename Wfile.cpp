#include "main1.h"
#include <fstream>
#include <cstring>
using namespace std;

void Wfile(char* fname, class Cars* it)
  {
  ofstream file;
  file.open(fname);
  string c;
  int i;
  while(1)
    {
      file<<it->getIN()<<"\t";
      file<<it->cmod<<"\t";
      file<<it->price<<"\t";
      file<<it->color<<"\t";
      file<<it->moch;
      file<<"\n";
    if(it->next!=NULL)
      it=it->next;
    else
      {
        file.close();
        break;
      }
    }
  
  }
class Cars* Rfile(char* fname)
  {
    class Cars* it=NULL , *begin;
    ifstream file;
    file.open(fname);
    int inum,color,moch,price,pro, i;
    string smod;
    char* cmod;
    i=0;
    if(!file)
      {
	cout<<"Невозможно прочитать файл\n";
      }
    else
      {     
        while (1)
         { 
           if(file.eof()==1) 
             break;
           file>>inum;
           file>>smod;
           cmod=new char[smod.length()];
           strcpy(cmod,smod.c_str());
           file>>price;
           file>>pro;
           if((pro>10)&&(pro<0))
                color=10;
           else
            color=pro;
            file>>moch;
          if (i==0)
           {
           it=new class Cars(inum,price,color, moch, cmod);
           begin=it;
           i++;
          }
          else
            {
            it->next=new class Cars(inum,price,color, moch, cmod);
            it=it->next;
            }
           }
     }
    return (begin);
  }
  

