#include <iostream>
#include <string>
#include "solution.hxx"

using namespace std;

int main(){
    string in;
    cout << "Enter string: ";
    cin >> in;
    try{
        Solution sol;
        cout << endl << "result: " << sol.lengthOfLongestSubstring(in) << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}