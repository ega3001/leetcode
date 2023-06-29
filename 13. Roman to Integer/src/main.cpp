#include <iostream>
#include <string>
#include "solution.hxx"

using namespace std;

int main(){
    string in;
    cout << "Enter romanian number: ";
    cin >> in;
    try{
        Solution sol;
        cout << endl << "Your number is: " << sol.romanToInt(in) << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}