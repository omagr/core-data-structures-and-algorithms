#include <bits/stdc++.h>
using namespace std;

//@ recursive function 
void recurssion(int x) {
    cout << "\nprint-" << x;
    // @Base Condition 
    if (x < 10) {
        //! recurssion(x++);
        // print-2
        // print-2
        // print-2
        // print-2....
        // @Calling fn
        recurssion(++x); // @awaits untill its done 
    }
}

fn() -> fn()
void fn2(int x);
void fn(int x);

int main() {
    // fn(2);
    recurssion(2);
    cout << "\nprint-1";
    return 0; 
}

void fn2(int x) {
    cout << "\nprint-" << x;
}

void fn(int x) {
    cout << "\nprint-" << x;
    fn2(3);
    cout << "\nprint-" << x+1;
}