class Pattern {
    public void pattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
    public void pattern2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.err.print(j);
            }
            System.out.print("\n");
        }
    }
    public void pattern3(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i);
            }
            System.out.print("\n");
        }
    }
    public void pattern4(int n) {
        for (int i = n; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
    public void pattern5(int n) {
        for (int i = n; i > 0; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            System.out.print("\n");
        }
    }
    public void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            // space
            for (int j = 0; j < (n - i - 1); j++) {
                System.out.print(" ");
            }
            // code
            for (int j = 0; j < (i * 2 + 1); j++) {
                System.out.print("*");

            }
            // space
            for (int j = 0; j < (n - i - 1); j++) {
                System.out.print(" ");
            }
            System.out.print("\n");
        }
    }
    public void pattern8(int n) {
        for (int i = n; i > 0; i--) {
            // space
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            // Star
            for (int j = 0; j < (i * 2 - 1); j++) {
                System.out.print("*");
            }
            // space
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            System.out.print("\n");
        }
    }
    public void pattern9(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                System.out.print("*");
            }
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    public void pattern10(int n) {
        for (int i = 0; i < 2 * n - 1; i++) {
            int stars = i;
            if (i >= n)
                stars = 2 * n - i;
            for (int j = 0; j < stars; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public void pattern11(int n) {
        int star = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                star = 1;
            else
                star = 0;
            for (int j = 0; j <= i; j++) {
                System.out.print(star);
                star = 1 - star;
            }
            System.out.println();
        }
    }
    public void pattern12(int n) {
        for (int i = 1; i <= n; i++) {
            // Number
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            // Space
            for (int j = 1; j <= (2*(n-i)); j++) {
                System.out.print(" ");
            }
            // Number
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
    public void pattern13(int n) {
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(count + " ");
                count++;
            }
            System.out.println();
        }
    }
    public void pattern14(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A';
            for (int j = 0; j <= i; j++) {
                System.out.print(ch++);
            }
            System.out.println();
        }
    }
    public void pattern15(int n) {
        for (int i = n; i > 0; i--) {
            char ch = 'A';
            for (int j = 0; j < i; j++) {
                System.out.print(ch++);
            }
            System.out.println();
        }
    }
    public void pattern16(int n) {
        char ch = 'A';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(ch);
            }
            ch++;
            System.out.println();
        }
    }
    public void pattern17(int n) {
        for (int i = 0; i < n; i++) {
            // space
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            // Char
            char ch = 'A';
            int breakPoint = (2*i+1)/2;
            for(int j = 0;j<(i*2)+1;j++){
                System.out.print(ch);
                if(breakPoint>j) ch++;
                else ch--;
            }
            // space
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }
    public void pattern18(int n) {
        for(int i =0;i<n;i++){
            char ch = 'E';
            char x = (ch-=i);
            // System.out.println(x+" "+i);
            for(int j = 0;j<=i;j++){
                System.out.print(x++);
            }
            System.out.println();
        }
    }
    public void pattern19(int n) {
        int inSpace = 0;
        for(int i = 0;i<n;i++){
            // Stars
            for(int j = 0;j<n-i;j++){
                System.out.print("*");
            }
            // space
            for(int j = 0;j<inSpace;j++){
                System.out.print(" ");
            }
            // Stars
            for(int j = 0;j<n-i;j++){
                System.out.print("*");
            }
            inSpace += 2;
            System.out.println();
        }
        inSpace = 8;
        for(int i = 1;i<=n;i++){
            // Stars
            for(int j = 0;j<i;j++){
                System.out.print("*");
            }
            // space
            for(int j = 0;j<inSpace;j++){
                System.out.print(" ");
            }
            // Stars
            for(int j = 0;j<i;j++){
                System.out.print("*");
            }
            inSpace -= 2;
            System.out.println();
        }
    }
    public void pattern20(int n) {
        int inSpace = 2*n-2;
        for(int i=1;i<=n*2-1;i++){
            int stars = i; 
            if(i>n) stars = 2*n - i;
            for(int j = 1;j<=stars;j++){
                System.out.print("*");
            }
            for(int j = 1;j<=inSpace;j++){
                System.out.print(" ");
            }
            for(int j = 1;j<=stars;j++){
                System.out.print("*");
            }
            if(i<n) inSpace -= 2;
            else inSpace += 2;
            // inSpace -= 2;
            System.out.println();
        }
    }
    public void pattern21(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==n-1 ||j==n-1){
                    System.out.print("*");
                }
                else {
                    System.out.print(" ");
                }
            }   
            System.out.println();
        }
    }
}

class Driver {
    public static void main(String args[]) {
        Pattern p = new Pattern();
        // p.pattern7(5);
        p.pattern21(5);
    }

}