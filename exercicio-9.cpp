#include <iostream>

using namespace std;

int main ()
{

  int GRR;
  float N1, N2, N3, MA, ME;
  char conceito;

  cout << " Digite o GRR : ";
  cin>> GRR;
  cout << " Nota 1: ";
  cin>> N1;
  cout << " Nota 2: ";
  cin>> N2;
  cout << " Nota 3: ";
  cin>> N3;
  cout << " Entre com ME ";
  cin>> ME;

  MA = (N1 + N2*2 + N3*3 + ME) / 7.0;

  if (MA > 90)
    {
      conceito = 'A';
    }
  else if (75 < MA and MA <= 90)
    {
      conceito = 'B';
    }
  else if (60 < MA and MA <= 75)
    {
      conceito = 'C';
    }
  else if (40 < MA and MA <= 60)
    {
      conceito = 'D';
    }
  else
    {
      conceito = 'E';
    }

  cout << "  GRR    N1 N2 N3 ME MEDIA   CONCEITO SITUACAO" << endl;
  cout << "==================================================" << endl;
  cout << GRR << "   " << N1 << " " << N2 ;
  cout << " " << N3 << " " << ME << " " << MA;
  cout  << "   " << conceito;

  if (conceito == 'A' or conceito =='B' or conceito == 'C')
    {
      cout  << "      APROVADO  " <<endl;
    }
  else
    {
      cout  << "      REPROVOU " <<endl;
    }

}