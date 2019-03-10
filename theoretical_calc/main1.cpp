#include <iostream>
#include <math.h>
#include <assert.h>

long long factorial(int n);

double CalcIt();

int main() {
    std::cout << CalcIt();
    return 0;
}

double CalcIt() {
    long long boxes = 12; /// EDIT HERE
    int extra_lifes = 1;
    int endgames = 3;
    double r1 = 5, r2 = 20, r3 = 100;
    int n_r1 = 5, n_r2 = 2, n_r3 = 1; // amount of specific reward // EDIT HERE
    int w = n_r1 + n_r2 + n_r3; // sum of simulation with cash reward

    assert(boxes == extra_lifes + endgames + w);
    assert(extra_lifes < endgames);

    double R = (n_r1 * r1 + n_r2 * r2 + n_r3 * r3) / w; // average reward
    int permutations = factorial(boxes) / ( factorial(w) * factorial(endgames) );
    int A1 = 0; // sum for all cases with 1st endgame before extra life
    int A2 = 0; // sum for all cases with 1st endgame after extra life

    /* code below works for 1 extra life */

    for (int i = 0; i <= w; i++)
        A1 += (w - i) * factorial(i + 3) / factorial(2) / factorial(i);

    for (int i = 0; i <= w; i++)
        for (int j = 0; j <= i; j++)
            for (int k = 0; k <= j; k++)
                A2 += (k + 1 ) * (w - k);

    double expected = (A1+A2)*R/permutations;

    int r4=10;
    double exp_endg_rew=(r1+r4+r2)/3; //expected engame reward
    double final_result=(5.0/4)*expected+exp_endg_rew;

    return final_result;
}

long long factorial(int n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
