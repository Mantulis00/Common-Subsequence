#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   long n, an, bn;
   long k;
   long a[1010], b[1010];
    bool brk;

//fstream fs ("duom.txt");


   cin >> n;
   for (int p=0; p<n; p++)
{

   cin >> an >> bn;

     for (int x=0; x<an; x++)
     {
         cin >> a[x];
     }
     for (int x=0; x<bn; x++)
     {
         cin >> b[x];
     }

     brk = false;
     for (int x=0; x<bn; x++)
     {
         for (int y=0; y<an; y++)
         {
             if (b[x] == a[y])
             {
                 brk = true;
                 cout << "YES" << endl << 1 << " " << b[x] << endl;
                 break;
             }
         }
         if (brk) break;
         else if (x+1 == bn) cout << "NO" << endl;
     }
}


    return 0;
}
