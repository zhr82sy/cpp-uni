#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    int floor(double num) {
        return (int)num; 
    }

    int add(int a, int b) {
        return a + b; 
    }

    double max1(double a, double b) {
        if (a > b)
            return a;
        return b; 
    }

    bool find1(string str, char ch) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ch)
                return true;
        }
        return false; 
    }

    int max2(int arr[], int size) {
        int max = arr[0]; 
        for (int i = 1; i < size; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max; 
    }
};

int main() {
    Calculator calc; 

    cout << calc.floor(5.8) << endl; 
    cout << calc.add(3, 4) << endl;  
    cout << calc.max1(3.5, 2.1) << endl; 
    cout << calc.find1("hello", 'o') << endl; 

    int arr[4] = {2, 5, 1, 9}; 
    cout << calc.max2(arr, 4) << endl; 

    return 0;
}