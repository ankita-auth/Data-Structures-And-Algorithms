// class Test{
//     public static void printTest(){
//         System.out.println("Hello");
//     }
// }
// public class program {
//     public static void main(String[] args) {
//         Test.printTest();
//     }

    
// }

//--------------------------X--------------------------

// class Test{
//     public void printTest(){
//         System.out.println("Hello");
//     }
// }
// public class program {
//     public static void main(String[] args) {
//         Test t=new Test();
//         t.printTest();
//     }

    
// }

//--------------------------------X-----------------------------------

// class Test{
//     int age;
//     public void assignAge(int num){
//         age=num;
//     }

// }

// public class program {
//     public static void main(String[] args) {
//         Test test1=new Test();
//         test1.assignAge(10);

//         Test test2=new Test();
//         test2.assignAge(19);

//         System.out.println(test1.age);
//         System.out.println(test2.age);
//     }

    
// }


//--------------------------------X-----------------------------------

import java.util.Scanner;
class Solution{
    public void printNumber(Scanner sc){
        int num=sc.nextInt();
        System.out.println(num);
    }
}

class program{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Solution s1=new Solution();
        s1.printNumber(sc);
    }

}
