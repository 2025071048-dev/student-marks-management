import java.io.FileInputStream;
import java.util.Scanner;

public class mobile_directory{
    static void main(String args[])throws Exception{
        int k=1;
        FileInputStream fi = new FileInputStream("mobile_data.txt");
        if(fi.available() == 0){
            System.out.println("Sorry file is empty");
            return;
        }
        System.out.println("Enter any name :: ");
        Scanner sc = new Scanner(System.in);
        Scanner file = new Scanner(fi);
        String name = sc.nextLine();
        System.out.println(sc);
        while((file.hasNext())){
            String word = file.next();
        if(word.equals(name)){
            k=0;
            System.out.print(word);
            String info = file.nextLine(); 
            System.out.println(info);
        }
        }
        if(k != 0)
           System.out.println("Sorry,not record found");
    }
}
