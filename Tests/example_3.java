class PrimeChecker {
    int isPrime(int num) {
        int i;
        if (num <= 0) {
            print("si sucede");
            return 0;
        }

        i = 2;
        while (i < num) {
            print("while sucede");
            if (num % i == 0) {
                print("0 sucede ==========");
                return 0;
            }
            i = i + 1;
        }

        print("tambien sucede");
        return 1;

    }

    int main() {
        int num;
        int result;
        num = 7;
        result = isPrime(num);
        print("res: ");
        print(result);
        return 0;
    }
}
