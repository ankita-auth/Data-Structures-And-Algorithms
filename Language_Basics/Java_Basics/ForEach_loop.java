import java.util.Scanner;
class ForEach_loop{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int[] arr = new int[size];
        int i;
        for(i=0; i<size; i++){
            arr[i] = scanner.nextInt();
        }

        for(int num: arr){
            System.out.print(num + " ");
        }
        scanner.close();
    }
}