package PAT_test;

import java.util.Scanner;

public class PAT1009 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s= input.nextLine();
		String[]words = s.split("\\s+");  
        for(int i=words.length-1 ;i>0 ;i--){    
            System.out.print(words[i]+" ");    
        }  
        System.out.println(words[0]);  
	}

}
