#include <iostream>
using namespace std;
int main (){
    char opt;
    int x,y;
    cin >> x >> opt >> y ;
    if (opt == '+'){
        cout << x+y;
    }
    else if ( opt == '-'){
        cout << x-y;
    }
    else if ( opt =='*'){
        cout << x*y;
    }
    else if (opt == '/') {
        if ( y == 0){
            cout << "error\n";
        }
        cout << (float)x/y;
    }else {
         cout << "error\n";
    }
    }
