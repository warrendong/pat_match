package PAT_test;

import java.util.Scanner;

public class PAT1011 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int T=input.nextInt();
		long[][] a=new long[T][3];
		for(int i=0;i<T;i++)
			for(int j=0;j<3;j++){
				a[i][j]=input.nextLong();
			}
		for(int i=0;i<T;i++)
		{
			long result=a[i][0]+a[i][1];
			if(result>a[i][2])
			{
				System.out.println("Case #"+(i+1)+": true");
			}
			else{
				System.out.println("Case #"+(i+1)+": false");
			}
		}
		

	}

}
