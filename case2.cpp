#include <iostream>
#include <string>
#include "case2.h"
using namespace std;

long long itc_len(string str){
     int kol,i;
     kol=0;
     i=0;
     while(str [i]!= '\0'){
      kol++;
      i++;
 }
 return kol;
 }
 int itc_len_num(long long number){
     int d;
     d=0;
 if (number == 0){
  d=1;
 }
 if (number<0){
 number=number*-1;
     }
 while (number > 0){
    number=number/10;
    d=d+1;
}
return d;
}
  string itc_reverse_str(string str){
long long lenght = itc_len(str);
string a;
for(int i=lenght-1;i>=0;i--){
     a+=str[i];
}
return a;
}

 string itc_kol1(int number,long long bit){
 string kod1;
 string kod11;
     if(number<0){
        kod11+='1';
        number=number*-1;
     }
     else{
        kod11+='0';
     }

 long long n;
 while(number>0){
    n=number%2;
    number=number/2;
    if(n==1){
       kod1+='1';
    }
    if(n==0){
       kod1+='0';
    }
 }
  kod1=itc_reverse_str(kod1);
  long long len=itc_len(kod1);
  for(long long i=0;i<bit-len-1;i++){
      kod11+='0';
  }
kod11+=kod1;
 return kod11 ;
 }


string itc_kol2(int number,long long bit){
 string kod2;
 string kod22;
 long long n;
 while(number>0){
    n=number%2;
    number=number/2;
    if(n==1){
       kod2+='0';
    }
    if(n==0){
       kod2+='1';
    }
 }
  kod2=itc_reverse_str(kod2);
  long long len=itc_len(kod2);
  for(long long i=0;i<bit-len;i++){
      kod22+='1';
  }
kod22+=kod2;
 return kod22;
}

string itc_kol3(int number,long long bit){
 string kod3;
 string kod33;
long long n;
long long l=bit;
long long m=1;
while(l>0){
m=m*2;
l--;
}
number=m-number;
while(number>0){
    n=number%2;
    number=number/2;
    if(n==1){
       kod3+='1';
    }
    if(n==0){
       kod3+='0';
    }
 }
 kod3=itc_reverse_str(kod3);
 return kod3;
}


