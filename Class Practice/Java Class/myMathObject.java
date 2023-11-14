import java.util.*;

class myMathObject {
    //static  x;
    public static void doMath() {
        Scanner sc = new Scanner(System.in);
        int x;
        int y;
        
        System.out.println("Please enter a number: ");
        x = sc.nextInt();
        System.out.println("Please enter a second number: ");
        y = sc.nextInt();
        System.out.println(x+y);
    }
}