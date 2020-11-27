
public class Java {

    public static void main(String[] args) {
        
        if (args.length != 2) {
            System.out.println("Not enough arguments provided!");
            System.out.println("Provide only " + args.length + " arguments!");
        }

        String wordString = args[0];
        int length = Integer.parseInt(args[1]);
        int count = 0;

        String[] splits = wordString.split("_");
        for (int i = 0; i < splits.length; i++) {
            if (splits[i].length() == length)
                count++;
        }

        System.out.println("The string is " + wordString);
        System.out.println("Target words: " + count);

    }

}