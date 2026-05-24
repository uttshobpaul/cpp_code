// check a string is palindrome or not using bool function(-_-)

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool ispalindrome(string str){
 string str2=str;
 reverse(str.begin() , str.end());
 return str2==str;
}
int main()
{
 string str;
 cout<<"enter a string : ";
 cin >> str;
 char a=ispalindrome(str);
 if ( a == true)
  cout<<"palindrome";
else
 cout<<"not palindrome ";

 return 0;
}