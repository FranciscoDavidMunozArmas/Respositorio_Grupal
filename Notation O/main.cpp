#include <iostream>

#include "O(1).cpp"
#include "O(log_n).cpp"
#include "O(n).cpp"
#include "O(n-2).cpp"

using namespace std;

int main()
{
    Order_1_ _o_1;
    Order_n_ _o_n;
    O_log_n_ _o_log_n;
    Order_N_2 _o_n_2;

    /*_o_1._run(10);
    _o_1._run(1000);
    _o_1._run(100000);
    _o_1._run(10000000);*/

    /*_o_log_n._run(10);
    _o_log_n._run(1000);
    _o_log_n._run(100000);
    _o_log_n._run(10000000);*/

    /*_o_n._run(1);
    _o_n._run(10);
    _o_n._run(100);*/

    _o_n_2._run(2);
    _o_n_2._run(4);
    _o_n_2._run(8);
    _o_n_2._run(16);


    system("pause");
}

