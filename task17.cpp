#include <iostream>
using namespace std;
main()
{
   string name;
   getline(cin, name);
   int x, j;
   int idx = 0;
   while (name[idx] != '\0')
   {
      j = 0;
      if (name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u' ||
          name[idx] == 'A' || name[idx] == 'E' || name[idx] == 'I' || name[idx] == 'O' || name[idx] == 'U')
      {
         x = idx;
         while (name[x] != '\0')
         {
            name[x] = name[x + 1];
            x++;
         }
         j = 1;
      }
      if (j == 0)
         idx++;
   }
   cout << "\nString without Vowels = " << name << endl;
}
