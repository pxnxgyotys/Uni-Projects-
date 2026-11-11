#include "pzhelp"
PROGRAM{

  int n=0;
  int m=0;
  n=READ_INT();
  m=READ_INT();
  REAL pinakas[n][m];
  //REAL s=0;
  //  WRITELN(n, m);
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      pinakas[i][j]=READ_REAL();
    }
  }
  REAL sum_gr=0;
  REAL sum_st=0;
  REAL mo_gr[n], mo_st[m];
  for (int i=0; i<n; i++){
    sum_gr=0;
    for(int j=0; j<m; j++){
      sum_gr += pinakas[i][j];
    }
    mo_gr[i]=sum_gr/m;
  }
  for (int i=0; i<m; i++){
    sum_st=0;
    for (int j=0; j<n; j++){
      sum_st+=pinakas[j][i];
    }
    mo_st[i]=sum_st/n;
  }


  //  for(int i=0; i<n; i++){
  //   for (int j=0; j<m; j++){
  //      s += pinakas[i][j];
  //      //  }
  // }
  //REAL mo;
  REAL average=0;
  for (int i=0; i<n; i++){
    average += mo_gr[i]/n;
  }
  REAL average2=0;
  for (int i=0; i<m; i++){
    average2 += mo_st[i]/m;
  }

  //mo=s/(n*m);
  //WRITELN(FORM(mo,0, 3 ));  prepei na balw 3 dekadika
  WRITELN(FORM(average,0, 3 ));
  WRITELN(FORM(average2,0, 3 ));
}
