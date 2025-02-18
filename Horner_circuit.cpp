﻿/* Дан многочлен P(x) = anxn + an−1xn−1 + … + a1x + a0 и число x.Вычислите значение этого многочлена,
 воспользовавшись схемой Горнера:P(x) = (…(((anx + an−1)x + an−2)x + an−3) …)x + a0
 Сначала программе подается на вход целое неотрицательное число n ≤ 20, затем действительное 
число x, затем следует n+1 вещественное число — коэффициенты многочлена от старшего к младшему.
*/

#include <iostream>

int main() {
    int n;
    double x, res = 0, f;
    std::cin >> n >> x;
    while (n--) { 
        std::cin >> f; 
        res += f; 
        res *= x; 
    }
    std::cin >> f;
    res += f;
    std::cout << res;
}


