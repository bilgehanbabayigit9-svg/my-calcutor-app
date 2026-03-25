//kodu kopyalayıp bir editöre yapıştırın
#include <iostream>

int main() {
    double num1, num2;
    char op;

    while (true) {
        std::cout << "lutfen 1. sayiyi giriniz: ";
        std::cin >> num1;
        std::cout << "lutfen 2. sayiyi giriniz: ";
        std::cin >> num2;
        std::cout << "lutfen operatoru giriniz (+, -, *, /): ";
        std::cin >> op;

        if (op == '+') {
            std::cout << "cevap: " << num1 + num2 << std::endl;
        } 
        else if (op == '-') {
            std::cout << "cevap: " << num1 - num2 << std::endl;
        } 
        else if (op == '*') {
            std::cout << "cevap: " << num1 * num2 << std::endl;
        } 
        else if (op == '/') {
            if (num2 == 0) {
                std::cout << "Hata: Bir sayi 0'a bolunemez!" << std::endl;
            } else {
                std::cout << "cevap: " << num1 / num2 << std::endl;
            }
        } 
        else {
            std::cout << "Lutfen gecerli bir operator girin!" << std::endl;
        }
        
        std::cout << "-----------------------" << std::endl;
    }
    return 0;
}
