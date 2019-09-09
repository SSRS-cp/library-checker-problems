#include <iostream>
#include <set>
#include <utility>
#include "testlib.h"
#include <queue>

using namespace std;

int main() {
    registerValidation();

    int n = inf.readInt(1, 200'000);
    inf.readSpace();
    int m = inf.readInt(0, 200'000);
    inf.readSpace();
    int s = inf.readInt(0, n - 1);
    inf.readEoln();

    for (int i = 0; i < m; i++) {
        int a = inf.readInt(0, n - 1);
        inf.readSpace();
        int b = inf.readInt(0, n - 1);
        inf.readEoln();
    }
    inf.readEof();
    return 0;
}
