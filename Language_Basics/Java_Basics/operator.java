class operator {
    public static void main(String[] args) {
        // Arithmetic Operator
        // -,+,/,*,%
        // int num1 = 5;
        // int num2 = 12;
        // int num3 = num1 + num2;
        // int num3 = num1 - num2;
        // int num3 = num1 / num2;
        // int num3 = num1 * num2;
        // int num3 = num1 % num2;
        // System.out.println(num3);

        // double num1 = 5;
        // double num2 = 12;
        // double num3 = num1 / num2;
        // System.out.println(num3);

        // ------------x------------

        // Unary Operator
        // +,-,++,--,!
        // int num1 = -6;
        // int num2 = -num1;
        // System.out.println(num2);

        // int num1 = -6;
        // int num2 = +num1;
        // System.out.println(num2);

        // boolean fl1 = true;
        // boolean fl2 = !fl1;
        // System.out.println(fl2);

        // boolean fl1 = true;
        // boolean fl2 = !!fl1;
        // System.out.println(fl2);

        //++->++num or num++
        // int num1=6;
        // int num2=num1++; //still 6
        // System.out.println("num1: "+ num1);
        // System.out.println("num2:"+num2);
        //----------------------------X------------------------------

        //Relational Operator
        //==, !=,<,>,<=,>=
        // int num1=6;
        // int num2=7;
        // boolean result=num1<=num2;
        // boolean result=num1>=num2;
        // boolean result=num1!=num2;
        // boolean result=num1==num2;
        // System.out.println("Result="+result);

        //-----------------------------x--------------------------
        
        //&&, ||
        // boolean first=true;
        // boolean second=true;
        // boolean result=first && second && first;
        // System.out.println(result);

        // boolean first=true;
        // boolean second=false;
        // boolean result=first || second && first;
        // System.out.println(result);

        //-------------------------X-----------------------

        //Assigment Operator
        // int num1=7;
        // int num2=8;
        // int result=9;
        // result+=num1+num2;
        // System.out.println(result);

        //---------------------------------X-------------------------
        
        //Ternary Operator
        //condition::first?second
        int num1=6;
        int num2=9;
        int num3=num1>num2 ?num1:num2;
        System.out.println(num3);

    }
}