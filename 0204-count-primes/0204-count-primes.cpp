class Solution {
public:
    int countPrimes(int n) {
        // best approach seive of eratosthenes
       

        if (n <= 2) return 0;

        vector<bool> prime(n, true);

        prime[0] = prime[1] = false;

        int ans = 0;

        for (int i = 2; i * i < n; i++) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                ans++;
            }
        }

        return ans;
    }
};

        
    