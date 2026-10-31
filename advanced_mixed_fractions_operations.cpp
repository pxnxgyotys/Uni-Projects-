#include "pzhelp"
PROGRAM{
    int n = READ_INT();
     int  a, p, a1, a2, p1, p2, gcd, x, y, ak;
      for (int i = 0; i < n; i++){
          SKIP_LINE();
          char c = getchar();
           a1 = READ_INT();
           p1 = READ_INT();
           a2 = READ_INT();
           p2 = READ_INT();
           if ( p1 == 0 || p2 == 0){
             WRITELN("error");
             continue;
           }
           switch (c){
           case '+': a =(a1 * p2 + a2 * p1); p = p1 * p2; break;
           case '-': a = (a1 * p2 - a2 * p1); p = p1 * p2; break;
           case '*': a = a1 * a2; p = p1 * p2; break;
           case '/': if(a2 !=0){
                       a = (a1 * p2);
                       p = (a2*p1);
                     }
                     else{ WRITELN("error"); continue; }     break;
           }

           x = a; y = p;
          if(x < 0) x = -x;
          if (y < 0)y = -y;

           while (x > 0 && y > 0){
           if (x > y) x = x % y;

           else y = y % x;
               }
         gcd = x + y;
       a = a / gcd;
       p = p / gcd;
       ak = a / p;
       a = a % p;

       if(p < 0){
          p = -p;
          a = -a;
       }
       if(ak == 0 && a < 0 ){
      WRITELN("-0", - a, p);
      }
