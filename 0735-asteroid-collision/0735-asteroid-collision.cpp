class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int ast : asteroids) {
            while (!st.empty() && ast < 0 && st.back() > 0) {
                if (st.back() < -ast) {
                    st.pop_back();
                }
                else if (st.back() == -ast) {
                    st.pop_back();
                    ast = 0;
                    break;
                }
                else {
                    ast = 0;
                    break;
                }
            }

            if (ast != 0) {
                st.push_back(ast);
            }
        }

        return st;
    }
};