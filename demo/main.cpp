#include <iostream>

#include <apiai/AI.h>

using namespace std;

int main()
{
    ai::AI::global_init();
    ai::AI::global_clean();

    cout << "Hello World!" << endl;

    return 0;
}

