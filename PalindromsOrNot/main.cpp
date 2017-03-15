#include <iostream>

using namespace std;

int revInt(int number)
{
    int reverse = 0;
    for( ; number!= 0 ; )
    {
        reverse = reverse * 10;
        reverse = reverse + number%10;
        number = number/10;
    }
    return reverse;
}

int isPalindrome(int number)
{
    int reversed, counter=0, iterate=1;
    do {
       reversed = revInt(number);
       cout<<"New Reversed Number is:  "<<reversed<<endl;
       
       if( number == reversed ) {
           cout<<"The tested number is a palindrome"<<endl;
           cout<<number<<" "<<counter<<endl;
           iterate = 0;
       } else {
           number += reversed;
           cout<<"New Number is:  "<<number<<endl;
           counter++;
       }
   } while (iterate > 0);
   return 0;
}

int main()
{
   int number;
   cout<<"Input a Number to Reverse and press Enter: ";
   cin>> number;     // Taking Input Number in variable number
   
   if( !(number <= 80 && number > 0) )
   {
       cout<<"Inputed number is not required range. Program will terminate."<<endl;
       return 0;
   }
   
   isPalindrome(number);
   
   return 0;
}

