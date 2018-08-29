#include <iostream>

using namespace std;

int main()
{
int number, i=0;

bool isprime = true;

cout<< "enter positive integers";

cin>> number;

   for (i=2; i<=number/2; ++i)
    if (number% i==0)
{
    isprime =false;
    break;
}
    if (isprime)
{
    cout<<"this is a prime number";

 }

else
{
    cout<<"this is not a prime number";
}
cin>> number;

for (i=2; i<=number/2; ++i)
    if (number% i==0)
{
    isprime =false;
    break;
}
    if (isprime)
{
    cout<<"this is a prime number";

 }

else
{
    cout<<"this is not a prime number";
}
    return 0;

}
