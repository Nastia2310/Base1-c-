#include <iostream>
#include <cstdlib>
#include <cstring>
class Cars
  {
    private:
    int inum;
    public:
    char* cmod;
    int price;
    int color;
    int moch;
    class Cars* next;
    Cars(int inum,int price,int color, int moch, char* cmod);	
    ~Cars();
    int getIN();
    void setIN(int IN);
    //char* getLoc(class Trains* pT);
 };
                                
void menu(char* fname, class Cars* pCars);
class Cars* Add(class Cars* it);  
void pokas(class Cars* it);
void poisk(class Cars* it);
void Wfile(char* fname,class Cars* it);
class Cars* change(class Cars* otk, class Cars* end);
class Cars* Rfile(char* fname);
class Cars* Del(Cars *it);
class Cars* Del1(Cars *it);
