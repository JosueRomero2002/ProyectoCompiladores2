class FactorialCalculator {
    int gg;

    int factorial(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    void dw() {
        int n;
    }

    int main() {
        int n;
        int resultado;
        n = 5;

        resultado = factorial(n);
        print(resultado);
    }
}
