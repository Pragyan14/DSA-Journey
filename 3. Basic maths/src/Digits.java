import java.lang.Math;

public class Digits {
    int n;

    Digits(int n) {
        this.n = n;
    }

    public void printDigits() {
        int temp = n;
        while (temp > 0) {
            System.out.print(temp % 10 + " ");
            temp = temp / 10;
        }
    }

    public int numberOfDigits1() {
        int count = 0, temp = n;
        while (temp > 0) {
            count++;
            temp = temp / 10;
        }
        return count;
    }

    public int reverse() {
        long rev = 0;
        int temp = n, ld;
        while (temp != 0) {
            ld = temp % 10;
            temp = temp / 10;
            rev = (rev * 10) + ld;
        }
        if (rev > Integer.MAX_VALUE || rev < Integer.MIN_VALUE) {
            return 0;
        }
        return (int) rev;
    }

    public boolean isPalindrome() {
        int temp = n, rev = 0, ld;

        while (temp > 0) {
            ld = temp % 10;
            rev = (rev * 10) + ld;
            temp = temp / 10;
        }
        return temp == rev && n > 0;
    }

    public boolean isArmstrong() {
        int temp = n, sum = 0, ld;
        int count = this.numberOfDigits2();
        while (temp != 0) {
            ld = temp % 10;
            temp = temp / 10;
            sum = sum + (int) Math.pow(ld, count);
            System.out.println(ld + " " + temp + " " + sum);
        }
        return n == sum;
    }

    public int numberOfDigits2() {
        return (int) (Math.log10(n) + 1);
    }

    public void printAllDivisors() {
        for (int i = 1; i <= Math.sqrt(n); i++) {
            if (this.n % i == 0)
                System.out.print(i+" ");
            if((n/i) != i)
                System.out.print(n/i+" ");
        }
    }
}
