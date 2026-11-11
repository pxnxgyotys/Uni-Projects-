#include "pzhelp"
PROGRAM{

  int n=0;
  int m=0;
  n=READ_INT();
  m=READ_INT();
  int pinakas[n][m], mx[m], mn[n];
  //  WRITELN(n, m);
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      pinakas[i][j]=READ_INT();
    }
  }
  for (int i=0; i<m; i++){
    int temp=0;
    for (int j=0; j<n; j++){
      if (temp<pinakas[j][i]){
        temp=pinakas[j][i];
      }

    }
    mx[i]=temp;
  }
  int temp_mx=mx[0];
  for (int i=0; i<m; i++){
    if (temp_mx > mx[i])
      temp_mx = mx[i];
  }
  WRITELN(temp_mx);

  // for (int i=0; i<m; i++)
  // WRITE(mx[i], " ");

  for (int i=0; i<n; i++){
    int temp=pinakas[i][0];
    for (int j=0; j<m; j++){
      if (temp > pinakas[i][j]){
        temp=pinakas[i][j];
      }
    }
    mn[i]=temp;
  }
  int temp_mn=mn[0];
  for (int i=0; i<n; i++){
    if (temp_mn < mn[i])
      temp_mn = mn[i];
  }
  WRITELN(temp_mn);
  // for (int i=0; i<n; i++)
  //  WRITE(mn[i], " ");
}

