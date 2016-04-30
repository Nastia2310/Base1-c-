#include "main1.h"
#include <cstring>
using namespace std;

void poisk(class Cars* it)
  {
      int i,isk, proverka;
      string mod;
      class Cars* begin=it;
      bool z=0;
      cout<<"Выберете параметр поиска?\n1.Модель автомобиля\n2.Номер машины\n3.Цена\n4.Цвет\n5.Мощность двигателя\n";
      cin>>i;
      switch(i)
        {
          case 1:
            cout<<"Введите модель автомобиля\n";
            cin.ignore();
            getline(cin,mod);
            while(1)
              {
                if(strcmp(mod.c_str(),it->cmod)==0)
                  {
                    cout<<"Модель: "<<it->cmod<<" Номер: "<<it->getIN()<<" Цена: "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<"\n";
                    z=1;
                  }
                if(it->next!=NULL)
                  it=it->next;
                else
                  {
                    if(z==0)
                      cout<<"Машины такой модели нет в базе"<<endl;
                    it=begin;
                    break;
                  }
              }
            break;    
          case 2:
            cout<<"Введите номер для поиска машины\n";
            cin>>isk;
            while(1)
              {
                if(it->getIN()==isk)
                  {
                    cout<<"Модель: "<<it->cmod<<" Номер: "<<it->getIN()<<" Цена: "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<"\n";
                    z=1;
                  }  
                if(it->next!=NULL)    
                  it=it->next;    
                else    
                  {    
                    if(z==0)    
                      cout<<"Машины с таким номером нет в базе"<<endl;    
                    it=begin;    
                    break;    
                  }    
             }      
            break;      
          case 3:
            cout<<"Введите цену автомобиля(в тыс. рублей)\n";
            cin>>isk;
            while(1)
              {
                if(it->price==isk)
                  {
                    cout<<"Модель: "<<it->cmod<<" Номер: "<<it->getIN()<<" Цена: "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<"\n";
                    z=1;
                  }  
                if(it->next!=NULL)
                  it=it->next;
                else   
                  {    
                    if(z==0)    
                      cout<<"Машины такой стоимости нет в базе"<<endl;
                    it=begin;
                    break;
                  }
              }  
            break; 
          case 4:
            while(1)
          {        
            cout<<"Ведите цвет автомобиля (1-черный, 2-серебристый, 3-белый, 4-синий, 5-коричневый, 6-красный, 7-голубой, 8-бежевый, 9-зеленый, 10-другой)\n";
            cin>>proverka;
            if((proverka<11)&&(proverka>0))
              {
                isk=proverka;
                break;
              }
           }
            while(1) 
              {
                if(it->color==isk)
                  {
                    cout<<"Модель: "<<it->cmod<<" Номер: "<<it->getIN()<<" Цена: "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<"\n";
                    z=1;
                  }
                if(it->next!=NULL)
                  it=it->next;
                else
                {
                    if(z==0)
                      cout<<"Машины такого цвета нет в базе"<<endl;
                    it=begin;
                    break;
                }

              }

            break;
          case 5:
            cout<<"Введите мощность двигателя\n";
            cin>>isk;
            while(1) 
              {
                if(it->moch==isk)
                  {
                    cout<<"Модель: "<<it->cmod<<" Номер: "<<it->getIN()<<" Цена: "<<it->price<<" Цвет: "<<it->color<<" Мощность: "<<it->moch<<"\n";
                    z=1;
                  }     
                if(it->next!=NULL)
                  it=it->next;
                else   
                  {    
                    if(z==0)
                      cout<<"Машины такой мощности нет в базе"<<endl;
                    it=begin;
                    break;   
                  }          
              }
            break;
          default:
            cin.clear();
            cin.ignore();
            i=0;
            cout<<"Ошибка ввода.Попробуйте еще раз.\n";
        }
    }
