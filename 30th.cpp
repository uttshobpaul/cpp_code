// // check palindrome condition, consider A==a and also discurt 'special char' ......................-> remove all non-alphnumeric and lower-case == upper-case
// #include<iostream>
// #include<cctype>
// using namespace std;
// bool ispal(string str){
// 	int st=0;
// 	int end=str.length()-1;
// 	while(st<end){
// 		if(!(isalpha(str[st]) || isdigit(str[st]))){
//          st++;
//          continue; 
//         }
//         if( !(isalpha(str[end]) || isdigit(str[end]) )){
//          end--;
//          continue;
//          }
//         if( tolower(str[st]) != tolower(str[end]))
//          return false;
// 	  st++;
// 	  end--;
// 	}
//     return true;
// }
// int main(){
//  string str;
// cout<<"enter string to check palindrome or not : ";
// getline(cin , str);
// if (ispal(str)) 
//  cout<<"palindrome"<<endl;
// else
//  cout<<"not palindrome"<<endl;
// return 0;
// }


// // remove all occurence of a sub-string from a string 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="daabcbaabcbc";
//     string sub_str="abc";
//     while( str.length()>0 &&  str.length() > str.find(sub_str)){
//         str.erase(str.find(sub_str) , sub_str.length());
//     }

//     cout<<"final string : "<<str<<endl;
//     return 0;
// }