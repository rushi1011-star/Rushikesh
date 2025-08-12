// import java.util.*;
// public class ifexample {
//     public static void main(String [] args){
//         Scanner sc=new Scanner(System.in);

//         System.out.print("Enter the your age:");
//         int age=sc.nextInt();

//         if(age>18){
//             System.out.print("Your are Eligible to apply for vote");            // voting
//         }
//         else
//         {
//             System.out.print("you are not eligible for apply..");
//         }
//     }
// }

import java.util.*;
public class ifexample{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in); 
        System.out.println("::::::::::::::::::::::::");
        System.out.println("1.Addition:");
        System.out.println("2.Multiplication:");
        System.out.println("3.Substration:");
        System.out.println("4.Division:");

        System.out.print("Enter the choice number:");
        int choice=sc.nextInt();
        
        do
        {
            switch(choice)
            {
                case 1:
                System.out.print("Enter the first number:");
                int first=sc.nextInt();
                System.out.print("Enter the second number:");
                int second=sc.nextInt();

                int add=first+second;
                System.out.print("Addition is:"+add);
                break;

                case 2:
                System.out.print("Enter the first number:");
                int firs=sc.nextInt();
                System.out.print("Enter the second number:");
                int seco=sc.nextInt();

                int multiplication=firs*seco;
                System.out.print("multiplication is:"+multiplication);
                break;

                case 3:
                System.out.print("Enter the first number:");
                int fir=sc.nextInt();
                System.out.print("Enter the second number:");
                int sec=sc.nextInt();

                int substraction=fir-sec;
                System.out.print("substraction is:"+substraction);
                break;
             
                case 4:
                System.out.print("Enter the first number:");
                int fi=sc.nextInt();
                System.out.print("Enter the second number:");
                int se=sc.nextInt();
 
                int division=fi/se;
                System.out.print("division is:"+division);
                break;
            }
        }
        while(choice!=5);
        {
            System.out.print("Enter the valid number");
        }
    }  
}