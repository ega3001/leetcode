#include <iostream>
#include <string>
#include "solution.hxx"

using namespace std;

int main(){
    int test = -4231;
    try{
        Solution sol;
        cout << endl << "result: " << sol.reverse(test) << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}