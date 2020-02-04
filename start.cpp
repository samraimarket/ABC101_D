#include <iostream>
#include <utility>
using namespace std;
int GetLevel(uint64_t N) {
    int ret = 0;
    while(10 <= N) {
        N /= 10;
        ret++;
    }
    return ret;
}

void f(uint64_t& N) {
   uint64_t level = GetLevel(N); 
    uint64_t hoge = 1;
   for (int i = 0; i < level;i++) {
       hoge *= 10;
   }

   if ((N / hoge) < 9) {
       N += hoge;
   } else {
       N += hoge * 10;
   }
}

int main () {

    uint64_t K;
    cin >> K;
    
    uint64_t val = 1;
    for (uint64_t i = 0; i < K; i++) {
        cout << val << endl;
        f(val);
    }

    return 0;
}

