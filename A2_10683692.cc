#include <iostream>
using namespace std;

int main()
{

int x, i;
bool Primenumber = true;

cout <<"Type a positive integer:";
cin >> x;

for(i = 2; i <= x / 2; ++i)
{

if(x % i == 0)
{

Primenumber = false;
break;
}

}
if (Primenumber)
cout <<"It is a prime number";
else
cout <<"It is not a prime number";

return 0;
}

