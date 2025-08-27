import java.util.Scanner;

public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello World!");
        
        float base, altura, area;

        Scanner sc = new Scanner(System.in);

        System.out.print("Digite a base: ");
        base = sc.nextFloat();

        System.out.print("Digite a altura: ");
        altura = sc.nextFloat();

        area = base * altura;

        System.out.println("Area = " + area);

        if (area > 10) {
            System.out.println("Que área grande!");
        } else {
            System.out.println("Que árinha pequena!");
        }

        sc.close();
        return;
    }
}