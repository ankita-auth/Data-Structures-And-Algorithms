import java.util.Scanner;
class DoWhileLoop{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        // do{
        //     int i = scanner.nextInt();
        //     if(i == 10){
        //         break;
        //     }
        //     System.out.println(i);


        // }while(true);
        int i;

        do{
            i = scanner.nextInt();
            System.out.println(i);


        }while(i!=10);
        scanner.close();
    }
}