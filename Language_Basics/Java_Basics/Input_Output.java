import java.util.Scanner;
class Input_Output{
    public static void main(String[] args){
        Scanner scanner=new Scanner(System.in);
        int num=scanner.nextInt();
        System.out.println(num);
        double n=scanner.nextDouble();
        System.out.println(n);

        String s=scanner.nextLine();
        String s2=scanner.nextLine();
        System.out.println(s);
        System.out.println(s2);
        String fname=scanner.next();
        String lname=scanner.next();
        System.out.println(fname+" "+lname);




        scanner.close();
    }
}