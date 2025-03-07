class FactorialCalculator {

    int factorial(int n) {
        n = 5;
        print(n);
        if (n <= 1) {
            print(n);
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    int main() {
        int n;
        int resultado;
        n = 5;
        print(n);

        resultado = factorial(n);
        print(resultado);
    }
}
