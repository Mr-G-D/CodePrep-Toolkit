import java.util.Scanner;

/**
 * @author DINESH KUMAR
 */

public class RabinKarp {

    public static int hash(String str){

        int hash = 0;
        for (int i = 0; i < str.length(); i++) {
            hash += (int) (str.charAt(i) * (Math.pow(52, (str.length() - (i+1)))));
        }

        return hash;
    }

    public static boolean searchPattern(String text, String str){

        int strHash = hash(str);

        for (int i = 0; i <= text.length()-str.length(); i++) {
            String temp = text.substring(i, str.length()+i);

            if(strHash == hash(temp)){
                if(str.equals(temp)){
                    return true;
                }
            }
        }

        return false;
    }

    public static void main(String[] args) {

        String text, pattern;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the main text");
        text = scanner.nextLine();

        System.out.println("Enter the pattern to be searched");
        pattern = scanner.nextLine();

        if(pattern.length() > text.length()){
            System.out.println("not Found");
            return;
        }else if (pattern.length() == text.length() && pattern.equals(text)){
            System.out.println("Found");
            return;
        }

        System.out.println(searchPattern(text, pattern) ? "Found" : "Not Found");
    }
}
