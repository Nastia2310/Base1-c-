#include "main1.h"
#include <cstring>
using namespace std;

class Cars* Add(class Cars* it)
  {
    string mer;
    int num, price, color, moch, proverka; 
    char* cmod; 
    if(it==NULL)
      {
        
        cout<<"Введите индивидуальный номер автомобиля\n";
        cin>>num;
        //cout<<num;
        cout<<"Введите модель автомобиля\n";
        cin.ignore();
        getline(cin,mer);
        cmod=new char[mer.length()];
        strcpy(cmod,mer.c_str());
        //cout<<cmod;
        cout<<"Введите цену автомобиля.\n";
        cin>>price;
        //cout<<price;
        while(1)
          {        
            cout<<"Ведите цвет автомобиля (1-черный, 2-серебристый, 3-белый, 4-синий, 5-коричневый, 6-красный, 7-голубой, 8-бежевый, 9-зеленый, 10-другой)\n";
            cin>>proverka;
            if((proverka<11)&&(proverka>0))
              {
                color=proverka;
                break;
              }
           }
        //cout<<color;
        cout<<"Введите мощность двигателя\n";
        cin>>moch;
        cout<<moch;
        it=new class Cars(num,price,color, moch, cmod);
        //cout<<it->price;
        return it;
      }
    else
      {
        class Cars* begin;
        class Cars* pro;
        begin=it;
        pro=it;
        while(it->next!=NULL)
          {
            it=it->next;
          }
        cout<<"Введите индивидуальный номер автомобиля\n";
        cin>>num;
        //while(it->next!=NULL)
          //{
            //if (pro->getIN()==num)
            // cout<<"Машина с таким номером уже есть в базе, попробуйте ввести снова";
            // cin<<num;
            // it=it->next;
         // }
        cout<<"Введите модель автомобиля\n";
        cin.ignore();
        getline(cin,mer);
        cmod=new char[mer.length()];
        strcpy(cmod,mer.c_str());                
        cout<<"Введите цену автомобиля в тыс.руб.\n";
        cin>>price;
        while(1)
          {        
            cout<<"Ведите цвет автомобиля (1-черный, 2-серебристый, 3-белый, 4-синий, 5-коричневый, 6-красный, 7-голубой, 8-бежевый, 9-зеленый, 10-другой)\n";
            cin>>proverka;
            if((proverka<11)&&(proverka>0))
              {
                color=proverka;
                break;
              }
           }
        cout<<"Введите мощность двигателя\n";
        cin>>moch;
        it=it->next=new class Cars(num,price,color,moch,cmod);
        return begin;
      }
  } 
Cars::Cars(int inum1,int price1,int color1, int moch1, char* cmod1)
  {
    inum=inum1;
    price=price1;
    color=color1;
    moch=moch1;
    cmod=new char[strlen(cmod1)];
    strcpy(cmod, cmod1);
    next=NULL;
    delete cmod1; 
  }
 Cars::~Cars()
  {
     delete (cmod);
  }
int Cars::getIN()
  {
    return inum;  
  } 
void Cars::setIN(int IN)
  {
    inum=IN;
  }
class Cars* change(class Cars* otk, class Cars* kyda)
  {
    class Cars* buf;
    buf=new Cars(kyda->getIN(),kyda->price,kyda->color,kyda->moch,kyda->cmod);
    kyda->setIN(otk->getIN());
    kyda->price=otk->price;
    kyda->color=otk->color;
    kyda->moch=otk->moch;
    kyda->cmod=new char[strlen(otk->cmod)];
    strcpy(kyda->cmod,otk->cmod);
    otk->setIN(buf->getIN());
    otk->price=buf->price;
    otk->color=buf->color;
    otk->moch=buf->moch;
    otk->cmod=new char[strlen(buf->cmod)];
    strcpy(otk->cmod,buf->cmod);
    delete buf;
  } 
class Cars* Del(Cars* it)
  {
    Cars* begin;
    Cars* buf;
    begin=it;
    int num=0;
    cout<<"Введите номер машины для удаления\n";
    cin>>num;
    if(num==0 || num<0)
      {
        system("clear");
        cout<<"Ошибка ввода\n";
        cin.clear();
        cin.ignore();
        return begin;
      }
    if(begin->getIN()==num)
      {
        change(begin,it->next);
        if(it->next->next!=NULL)
          begin->next=it->next->next;
        else
          begin->next=NULL;
        delete it->next;
      }
    else
      {
        while(it->next->getIN()!=num)
          {
            if(it->next!=NULL)
              it=it->next;
            else
              {
                cout<<"Нет машины с таким номером\n";
                return 0;
              }
           }
        if(it->next->next==NULL)
          {
            delete it->next;
            it->next=NULL;
          }
        else
          {
            buf=it->next;
            it->next=it->next->next;
            delete buf;
          }
     }
} 
class Cars* Del1(Cars* it)
  {
    Cars* begin;
    begin=it;
 while(1)
 {
  if(it->next->next==NULL)
          {
            delete it->next;
            it->next=NULL;
            break;
          }
        else
           it=it->next;
  }
return (begin);
 }          
