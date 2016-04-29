#include <iostream>

using namespace std;

int main()
{ int n,x,y;
  cout << "input 9 or 10:" << endl ;
  cin >> n;
  char a[n];
  cout << "input " << n << " English:" << endl;
  cin >> a;
  for ( int i=0; i<n/2; ++i )
      { x=a[i];
        y=a[n-1-i];
      }
  if (x==y)
     { cout << "symmetric";
     }
  else
     { cout << "no symmetric";
     }

return 0;
}

