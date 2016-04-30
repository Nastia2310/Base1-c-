#include "main1.h"
#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

void menu(char* fname, class Cars* pCar)
  {
    int i;  
    while(1)
      {
        cout<<"\nМеню:\n 1.Загрузить данные из файла\n 2.Добавить машину в базу\n 3.Удалить информацию о машине\n 4.Поиск машины в базе\n 5.Показать информацию о всех имеющихся машинах\n 6.Выйти из программы\n 7.Очистить экран\n";
        cin>>i;
        switch(i)
          {
            case 1:
              pCar=Rfile(fname);
              Del1(pCar);
              continue;
            case 2:
              pCar=Add(pCar);
              Wfile(fname,pCar);
              continue;
            case 3:
              Del(pCar);
              continue;
            case 4:
              poisk(pCar);
              continue;
            case 5:
              pokas(pCar);
              continue;
            case 6:
              cout<<"Досвидания\n";
              exit(1);
            case 7:
              system("clear");
              cout<<"Экран очищен";
              continue;
            default:
              cin.clear();
              cin.ignore();
              i=0;
              system("clear");
              cout<<"Ошибка ввода.Попробуйте еще раз.\n";
              continue; 
          }
      }
    }  
