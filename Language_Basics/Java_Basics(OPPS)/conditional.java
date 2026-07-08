// import java.util.Scanner;
// class conditional{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int age=sc.nextInt();
//         if(age>=18){
//             System.out.println("Adult");

//         }
//         else{
//             System.out.println("Teen");
//         }
//         sc.close();
//     }
// }

//-----------------------------------------X-----------------------------------

//netsed if 
 
// import java.util.Scanner;
// class conditional{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int marks=sc.nextInt();
//         if(marks>=90){
//             System.out.println("Grade A");
//         }
//         else{
//             if(marks>=70){
//                 System.out.println("Grade B");

//             }else{
//                 if(marks>=50){
//                     System.out.println("Grade C");
//                 }
//                 else{
//                     if(marks>=35){
//                         System.out.println("Grade D");
//                     }else{
//                         System.out.println("Fail");
//                     }
//                 }
//             }
            

//     }}    
// }

//---------------------------------------------------X--------------------------------------------

 //if-elif-else

// import java.util.Scanner;
// class conditional{
//     public static void main(String[] args){
//         Scanner scanner = new Scanner(System.in);
//         int marks = scanner.nextInt();
       
       
 
//         if(marks >= 90){
//             System.out.println("A");
//         }
//         else if(marks >= 70){
//             System.out.println("B");
//         }
//         else if(marks >= 50){
//             System.out.println("C");
//         }
//         else if(marks >= 35){
//             System.out.println("D");
//         }
//         else{
//             System.out.println("Fail");
//         }
//     }
// }
 
//---------------------------------X-------------------------------------


import java.util.Scanner;
class conditional{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        // if(a>b && a>c){
        //     System.out.println("a is largest");
        // }else if(b>a && b>c){
        //     System.out.println("b is largest");
        // }else if(c>a && c>b){
        //     System.out.println("c is largest");
        // }else{
        //     System.out.println("No One is greater");
        // }

        //nested
        if(a>b){
            if(a>c){
                System.out.println("a");

            }else{
                System.out.println("c");
                
            }
        }else{
            if(b>c){
                System.out.println("b");

            }else{
                System.out.println("c");
            }
        }
        sc.close();




    }
}
