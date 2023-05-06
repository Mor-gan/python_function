#include <iostream>
#include <string>
#include <vector>

// Write your answers in the form of functions here

//A function called sum_first_last_divide_middle which accepts a std::vector 
//of floats and return a float

float sum_first_last_divide_middle(const std::vector<float>& vNum) {
    if (vNum.size() == 0) {
        return 0.0f; // return 0 if vector is empty
    }
    float middle;
    if (vNum.size() % 2 == 0) {
        middle = (vNum[vNum.size() / 2 - 1] + vNum[vNum.size() / 2]) / 2.0f;
    } else {
        middle = vNum[vNum.size() / 2];
    }
    return (vNum.front() + vNum.back()) / middle;
}

//A function that accepts float and returns it, and turns whatever 
//it takes in to negative number and return it. 
float as_negative(float numNeg) {
    return (numNeg >= 0) ? (-numNeg) : numNeg;
}

//A function called n_multiples_of which accepts two integers 
//and returns a std::vector of integers
std::vector<int> n_multiples_of(int n, int number) {
    std::vector<int> multiples(n);
    for (int i = 0; i < n; i++) {
        multiples[i] = number * (i+1);
    }
    return multiples;
}
//A function called n_multiples_of which accepts both a std::vector of integers 
//and a single integer argument  n and returns a bool

bool is_multiple(const std::vector<int>& numbers, int n) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }    return (sum % n == 0);
}

int main() {
    // The code in this function is provided as an example of how the
    // functions you write may be called. It is non-exhaustive and
    // does not check correctness.


    // First, last, middle calculation
    std::vector<float> test_values = {1, 4, 20, 11};
    float result = sum_first_last_divide_middle(test_values);
    std::cout << "The sum of the first and last, divided by the middle element is " << result << std::endl;

    // As negative
    //std::cout << std::endl;  // Just a blank line
    for(auto i : {-5.4, 4.0, 3.67}) {
        float neg = as_negative(i);
        std::cout << i << " as negative is " << neg << std::endl;
    }

    // N multiples of
    std::cout << std::endl;  // Just a blank line
    int n = 5;
    int x = 4;
    std::vector<int> multiples = n_multiples_of(n, x);
    std::cout << "The " << n << " multiples of " << x << " are:" << std::endl;
    for (auto i : multiples) {
        std::cout << "  " << i << std::endl;
    }

    // Is multiple
    std::cout << std::endl;  // Just a blank line
    std::vector<int> number_set = {5, 9, 51, 4, 8, 95, 54, 96, 5};
    auto multiple = 3;
    bool it_is_a_multiple = is_multiple(number_set, multiple);
    if(it_is_a_multiple) {
        std::cout << "Sum of list is a multiple of " << multiple << std::endl;
    } else {
        std::cout << "Sum of list is not a multiple of " << multiple << std::endl;
    }
}
