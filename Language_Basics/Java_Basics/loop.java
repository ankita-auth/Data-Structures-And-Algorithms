import java.util.Scanner;
class loop{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        // for(int i=0;i<10;i++){
        //     System.out.println("Hi");
        // }

        //--------------------------X---------------------------------
        int s=0;
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            s+=arr[i];
        }
        for(int j=0;j<n;j++){
            System.out.println(arr[j]);
        }
        System.out.println("Sum="+s);
        sc.close();
    }

}