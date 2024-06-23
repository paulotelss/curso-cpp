#include <iostream>
#include <cmath>

// Função para calcular as raízes de uma equação quadrática
void resolverEquacaoQuadratica(double a, double b, double c) {
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double x1 = (-b + std::sqrt(discriminante)) / (2 * a);
        double x2 = (-b - std::sqrt(discriminante)) / (2 * a);
        std::cout << "As raízes da equação são reais e distintas:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        std::cout << "As raízes da equação são reais e iguais:" << std::endl;
        std::cout << "x = " << x << std::endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = std::sqrt(-discriminante) / (2 * a);
        std::cout << "As raízes da equação são complexas e conjugadas:" << std::endl;
        std::cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << std::endl;
        std::cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << std::endl;
    }
}

int main() {
    double a = 1;
    double b = 2;
    double c = -8;

    std::cout << "Resolvendo a equação: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    resolverEquacaoQuadratica(a, b, c);

    return 0;
}
