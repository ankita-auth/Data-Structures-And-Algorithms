//Base Class
abstract class BankAccount{
    private double balance;
    abstract void addMoney(double amount);
    abstract void canUserwithdrawMoney(double amount);
    void updateBalance(double _balance){
        balance=_balance;
    }
    public double getBalance(){
        return balance;
    }

}
//Derived Class
class SavingAccount extends BankAccount{
    public void addMoney(double amount){
        super.updateBalance(super.getBalance()+amount);

    }
    public void canUserwithdrawMoney(double amount){
        if(super.getBalance()>=amount){
            System.out.println("User Can");
        }
        else{
            System.out.println("User Cannot");
        }

    }
}
//Derived Class
class CurrentAccount extends BankAccount{
    double minimumLimit=1000.0;
    public void addMoney(double amount){
        super.updateBalance(super.getBalance()+amount);

    }
    public void canUserwithdrawMoney(double amount){
        if(super.getBalance()-amount>=minimumLimit){
            System.out.println("User Can");
        }
        else{
            System.out.println("User Cannot");
        }

    }

}
class Abstract{
    public static void main(String[] args){
        //BankAccount ba=new BankAccount();
        CurrentAccount ca=new CurrentAccount();
        ca.addMoney(20000);
        ca.canUserwithdrawMoney(500000);
        System.out.println(ca.minimumLimit);
    }
}
