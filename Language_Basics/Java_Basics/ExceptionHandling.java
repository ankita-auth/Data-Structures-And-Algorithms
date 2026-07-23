import java.util.Scanner;
class ExceptionHandling{
    public static void main(String[] args){
       try{
        int num1 = 10;
        int num2 = 0;
        int num3 = num1/num2;
        System.out.println(num3);//Error
       }
    //    catch(Exception ex){
    //     System.out.println(ex);
    //    }
    // }

    catch(ArithmeticException ex){
        System.out.println(ex);
       }

       finally{
        System.out.println("done");
       }
    }
}