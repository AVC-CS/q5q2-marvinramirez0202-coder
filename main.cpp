#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int result;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;

    cout << N << " to power number: ";

    // TODO
    result = 1;
    cout << "1, ";
    if(N > 0 & N < 10 & M >= 1 & M <= 10){
        for(int i = 0; i < M; i++){
            result = result * N;
        if(i == M - 1){
            cout << result << endl;
        }
        else{
            cout << result << ", ";
        }
        }
    }
    cout << endl;

    return 0;
}
