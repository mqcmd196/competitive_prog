#include <bits/stdc++.h>

int main() {
    unsigned int N, M;
    std::cin >> N >> M;

    std::vector<int64_t> A(N);
    std::vector<int> X(M);

    for(size_t i=0; i<N; i++){
      std::cin >> A.at(i);
    }
    for(size_t i=0; i<M; i++){
      std::cin >> X.at(i);
    }

    std::sort(A.begin(), A.end());

    for(const auto &x: X){
      std::cout << A.at(x) << std::endl;
    }

    return 0;
}
