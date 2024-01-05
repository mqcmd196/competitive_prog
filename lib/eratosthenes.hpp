using namespace std;

vector<bool> Eratosthenes(u_int64_t N){
    vector<bool> is_prime(N+1, true);
    is_prime.at(0) = false;
    is_prime.at(1) = false;

    for(unsigned long long i=2; i<=N; i++){
        if(is_prime.at(i)){
            for(unsigned long long j=2; i*j<=N; j++){
                is_prime.at(i*j) = false;
            }
        }
    }

    return is_prime;
}
