import java.util.*;
import java.lang.Character;
public class test {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
//        System.out.print("Enter the no of account you will be wanted to create : ");
//        int size = input.nextInt();
       int no= 0;
        System.out.println("1.Create a account.");
        System.out.println("2.Display account.");
        System.out.println("3.Search a account.");
        while(no<5){
            Account[] A = new Account[5];
            System.out.print("Enter your choice : ");
            int choice = input.nextInt();
            switch (choice){
                case 1 :
                    System.out.println(no);
                        A[no] = new Account();
                        A[no].assignAccount(A[no]);
                        no++;
                    break;
                case 2 :
                    for (int i = 0 ; i<5 ; i++) {
                        A[i].Display();
                    }
                    break;
                case 3 :
                         break;
                default:
                    System.out.println("Wrong choice......"+"\n"+"Please enter valid choice");
            }
        }
        System.out.println("You have reached your limit......");
    }
}
class Account {
    double id ,balance;
    String name;
    void assignAccount( Account A){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the Account id : ");
        A.id = input.nextDouble();
        System.out.print("Enter the Account Balance : ");
        A.balance = input.nextDouble();
        input = new Scanner(System.in);
        System.out.print("Enter the Account Name : ");
        A.name = input.nextLine();
    }
    void Display(){
        System.out.println("Account id is : "+id);
        System.out.println("Account Name is : "+name);
        System.out.println("Account Balance is : "+balance);
        System.out.println();
    }
    void search(){

    }
}
