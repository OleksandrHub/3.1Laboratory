#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int n;
   cout<<"Введіть код кольору: "; cin>>n;
   switch(n){
       case 0 : cout<<"чорний"<<endl;break;
       case 1 : cout<<"синій"<<endl;break;
       case 2 : cout<<"зелений"<<endl;break;
       case 3 : cout<<"синьо-зелений"<<endl;break;
       case 4 : cout<<"червоний"<<endl;break;
       case 5 : cout<<"малиновий"<<endl;break;
       case 6 : cout<<"коричневий"<<endl;break;
       case 7 : cout<<"білий"<<endl;break;
       default: cout<<"помилковий ввід"<<endl;
   }

    return 0;
}
