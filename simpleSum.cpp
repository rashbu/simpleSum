
#include <iostream>

int main() {

    int i;
    int j;
    int t;
    int n;
    int sum;

    std::cout << "Type the number of tests: ";
    std::cin >> t;

    for (i = 0; i < t; i++) {
        
        int numbers = 1;

        std::cout << "How many numbers: ";
        std::cin >> n;
        sum = 0;
        

        for (j = 0; j < n; j++) {
            int temp;

            std::cout << "Number " << numbers << ": ";
            std::cin >> temp;
            
            sum += temp;
            numbers++;
        }
        std::cout << "" << sum << std::endl;
    }

    return 0;
}