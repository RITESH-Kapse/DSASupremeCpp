#include <iostream>
using namespace std;

int main() {

    int a=100;
    int ans = (a << 3); //left shift - n times then a*2(power n)

    cout << "Left Shift OP " <<ans << endl;

    //right shift operator

    int op = (a >> 2); //right shift - n times then a/2(power n)

    cout << "Right shift OP " << op << endl;

    return 0;

}