#include <iostream>
using namespace std;

int main() {
    long long  N;
    cin >> N;

    long long total = N * (N + 1) * (2 * N + 1) / 6;

    cout << total;

    return 0;
}

/*

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        long long total = N * (N + 1) * (2*N + 1) / 6;
        return total ;  
        
    }
};
*/