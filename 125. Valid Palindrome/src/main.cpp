#include <iostream>
#include <string>
#include "solution.hxx"

using namespace std;

int main(){
    string in;
    cout << "Enter test palindrome: ";
    getline(cin, in);
    try{
        Solution sol;
        cout << endl << "Is palindrome: " << sol.isPalindrome(in) << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}