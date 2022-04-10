#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random(int min, int max) //range : [min, max]
{
   static bool first = true;
   if (first) 
   {  
      srand( time(NULL) ); //seeding for the first time only!
      first = false;
   }
   return min + rand() % (( max + 1 ) - min);
}

int main()
{
    char tab[24] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','w','x','y','z'};
    char tabU[24] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','W','X','Y','Z'};
    char symbole[7]={'!','@','#','$','%','^','&'};
   int dlugosc;
   string haslo="";
   cout <<"Podaj dlugosc hasla\n";
   cin >>dlugosc;
   for(int i=0;i<dlugosc;i++){
       
       int level=random(0,2);
       if(level==0){
           haslo=haslo+tab[random(0,23)];
       }else if(level==1){
         haslo=haslo+tabU[random(0,23)];
       }else if(level==2){
        haslo=haslo+symbole[random(0,6)];
       }
   }
    cout<<"Wygenerowane haslo: "<<haslo<<endl;
    return 0;
}