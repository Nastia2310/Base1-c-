#include "main1.h"
using namespace std;

void pokas(class Cars* it)
  {
    Cars* begin;
    begin=it;
    if(it==NULL)
      {
        cout<<"Список пуст.\n";
        return;
      }
    while(1)
      {
        cout<<"Номер машины: "<<it->getIN()<<" Модель: "<<it->cmod<<" Цена(тыс. руб): "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<endl;
        if(it->next!=NULL)
          it=it->next;
        else
          break;
      }
  }    