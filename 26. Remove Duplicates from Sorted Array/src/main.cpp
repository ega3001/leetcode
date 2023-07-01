#include <iostream>
#include <vector>
#include <iterator>
#include "solution.hxx"

using namespace std;

int main(){
    vector<int> test{0,0,1,1,1,2,2,3,3,4,5,5};
    try{
        Solution sol;
        cout << endl << "result array: " << sol.removeDuplicates(test) << endl;
        for (auto n: test)
            cout << n << " ";
        cout << endl;
    }
    catch(exception &e){
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}