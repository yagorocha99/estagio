#include <iostream>
#include <vector>

std::vector<int> fibonacciSequence(int n) {
    std::vector<int> fibSequence(n);
    fibSequence[0] = 0;
    fibSequence[1] = 1;
    
    for (int i = 2; i < n; i++) {
        fibSequence[i] = fibSequence[i-1] + fibSequence[i-2];
    }
    
    return fibSequence;
}

bool isInFibonacciSequence(int number) {
    int n = number + 1;
    std::vector<int> fibSequence = fibonacciSequence(n);
    

    for (int i = 0; i < n; i++) {
        if (fibSequence[i] == number) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int number;
    std::cout << "Digite um número para verificar se ele pertence à sequência de Fibonacci: ";
    std::cin >> number;
    

    if (isInFibonacciSequence(number)) {
        std::cout << "O número " << number << " pertence à sequência de Fibonacci." << std::endl;
    } else {
        std::cout << "O número " << number << " não pertence à sequência de Fibonacci." << std::endl;
    }
    
    return 0;
}
