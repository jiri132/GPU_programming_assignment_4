#include "utils.h"

tuple<float, int> max_element(const vector<float>& v) {
    float max_el = -FLT_MAX;
    int max_idx = 0;
    for (size_t i = 0; i < v.size(); i++)
        if (v[i] > max_el) {
            max_el = v[i];
            max_idx = i;
        }
    return tuple<float, int>(max_el, max_idx);
}

int main() {
    //srand(time(nullptr));
    const int n = 18;
    vector<float> h_v = get_random_vector(n);
    
    cout << "v: " << h_v << endl;

    auto [max_val, max_idx] = max_element(h_v);
    cout << "max element: " << max_val << " at index: " << max_idx << endl;
}