#include "pzhelp"
PROGRAM{
  int n = READ_INT();
  int  a, p, a1, a2, p1, p2, gcd, x, y;
  for (int i = 0; i < n; i++){
    SKIP_LINE();
   char c = getchar();
   a1 = READ_INT();
   p1 = READ_INT();
   a2 = READ_INT();
   p2 = READ_INT();
    switch (c){
      case '+': a =(a1 * p2 + a2 * p1); p = p1 * p2; break;
      case '-': a = (a1 * p2 - a2 * p1); p = p1 * p2; break;
      case '*': a = a1 * a2; p = p1 * p2; break;
      case '/': a = (a1 * p2); p = (a2*p1); break;
    }
    x = a; y = p;
    while (x > 0 && y > 0){
      if (x > y){
        x = x % y;
      }
      else{
       y = y % x;
      }
    }
    gcd = x + y;
    a = a / gcd; p = p / gcd;
    WRITELN(a, p);
  }
}
