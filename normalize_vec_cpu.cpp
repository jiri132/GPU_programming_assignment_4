#include "utils.h"

float square_length(const vector<float>& v) {
    float sum = 0;
    for (size_t i = 0; i < v.size(); i++)
        sum += v[i] * v[i];
    return sum;
}

int main() {
    //srand(time(nullptr));
    const int n = 18;
    vector<float> h_v = get_random_vector(n);
    
    cout << "v: " << h_v << endl;

    float length = sqrt(square_length(h_v));
    cout << "length: " << length << endl;
    for (int i = 0; i < n; i++)
        h_v[i] /= length;
    length = sqrt(square_length(h_v));
    cout << "length after normalization: " << length << endl;
}