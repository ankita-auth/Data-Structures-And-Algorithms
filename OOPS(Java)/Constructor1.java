// class Test{
//     public Test(){
//         System.out.println("test constructor called.");

//     }
//     public void printHello(){
//         System.out.println("Hello");
//     }
// }

// class Constructor1{
//     public static void main(String[] args) {
//         Test t=new Test();
//         t.printHello();
//     }
// }

//---------------------X-------------------------------

// class BankAccount{
//     double balance;
//     public BankAccount(){
//         balance=100;
//     }
//     public void printBalance(){
//         System.out.println(balance);
//     }
// }

// class Constructor1{
//     public static void main(String[] args) {
//         BankAccount t=new BankAccount();
//         t.printBalance();
//     }
// }


//---------------------X-------------------------------

//parameterised

// class BankAccount{
//     double balance;
//     public BankAccount(double _balance){
//         balance=_balance;
//     }
//     public void printBalance(){
//         System.out.println(balance);
//     }
// }

// class Constructor1{
//     public static void main(String[] args) {
//         BankAccount t=new BankAccount(200);
//         t.printBalance();
//     }
// }


//---------------------X-------------------------------


class BankAccount{
    double balance;
    String accountType;
    public BankAccount(double _balance){
        balance=_balance;
        accountType="Savings";
    }
    public BankAccount(double _balance,String _accountType){
        balance=_balance;
        accountType=_accountType;
    }
    public void printBalance(){
        System.out.println(balance);
    }
     public void printAccountType(){
        System.out.println(accountType);
    }
}

class Constructor1{
    public static void main(String[] args) {
        BankAccount t1=new BankAccount(100);
        t1.printBalance();
        t1.printAccountType();

        BankAccount t2=new BankAccount(200,"Current");
        t2.printBalance();
        t2.printAccountType();


    }
}
