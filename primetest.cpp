/*
 * CSc103 Project 2: prime numbers.
 * See readme.html for details.
 * Please list all references you made use of in order to complete the
 * assignment: your classmates, websites, etc.  Aside from the lecture notes
 * and the book, please list everything.  And remember- citing a source does
 * NOT mean it is okay to COPY THAT SOURCE.  What you submit here **MUST BE
 * YOUR OWN WORK**.
 * References:
 * https://stackoverflow.com/questions/4236853/floating-point-exception-c-why-and-what-is-it
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
int n;
 while (cin >> n){
  if ((n ==  1) || (n != 2 && n % 2 == 0)){ //if even and not 2 then automatic composite
   cout << "0\n";
  }
  else {
   int dividends = 0;
   int i = 1;

   while (i <= n){
    if(n % i == 0){
     dividends++;
    }
    i++;
   }

   if(dividends > 2){
    cout << "0\n";
   }
   else {
    cout << "1\n";
   }
  }

 }
	return 0;
}

/*
Thinking Process:
All even numbers are composite except 2
All prime numbers have 2 dividends, 1 and itself
Composite have 3 or more
*/