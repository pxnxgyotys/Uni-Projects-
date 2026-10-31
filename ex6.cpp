#include "pzhelp"
int pinakas[10], i, j, p, n, arithmos, psifio, sum;
void dynameis (int n)
{
    for (i=0; i<10; i++)
        {
              p=1;
                  for (j=0; j<n; j++){
                          p=p*i;
                              }
                      pinakas[i]=p;
                        }
}
PROGRAM {
    n=READ_INT();
      dynameis(n);

for(i=0; i<99999999; i++){
  arithmos = i;
  sum = 0;
  while (arithmos>0){
    psifio = arithmos % 10;
    sum = sum + pinakas[psifio];
    arithmos = arithmos / 10;

  }
  if (sum == i){WRITELN(sum);
  }

}
}
