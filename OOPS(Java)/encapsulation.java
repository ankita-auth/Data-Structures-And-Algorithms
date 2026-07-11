

class BankAccount{
    private double balance;
 
    public BankAccount(double _balance){
        balance=_balance;
        
    }
    
    public void setBalance(double balance){
        this.balance=balance;
    }
   
    public double getBalance(){
        //logic of checking if he is a bank emlpoyee
        return balance;
    }
    
}

class encapsulation{
    public static void main(String[] args) {
        BankAccount t1=new BankAccount(100);
        t1.setBalance(900);
        System.out.println(t1.getBalance());
        


    }
}
