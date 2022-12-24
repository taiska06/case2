#include <iostream>
#include <string>
#include "case2.h"
using namespace std;

int main()
{
   int number;
   cin>>number;
   long long bit;
   cin>>bit;
   cout<<itc_kol1(number,bit)<<endl;
   if(number<0){
   number=number*-1;
   cout<<itc_kol2(number,bit)<<endl;
   cout<<itc_kol3(number,bit);
}
}
