#include <iostream>
#include <vector>
#include <string>

using namespace std;
double convertic(char a[])
{
    char * s;
    double x;
    x= strtod(a,&s);
    return x;
}
int main() {
   char s[]="12.3";
   convertic(s);
   return 0;
}
