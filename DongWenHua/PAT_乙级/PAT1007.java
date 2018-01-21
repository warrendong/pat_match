package PAT_test;

import java.util.ArrayList;
import java.util.Scanner;

public class PAT1007 {
	public static boolean prime(int n){
		boolean result=true;
		if(n<2){
			result=false;
		}
		else{
			for(int i=2;i<=Math.sqrt(n);i++)
			{
				if(n%i==0)
				{
					result=false;
					break;
				}
			}
		}
		return result;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input=new Scanner(System.in);
		int N=input.nextInt();
		int  su=0;
		ArrayList a=new ArrayList();
		for(int i=2;i<=N;i++)
		{
			if(prime(i))
			{
				a.add(i);
			}
		}
		for(int i=0;i<a.size()-1;i++)
		{
			int ele = (Integer) a.get(i);
			int ele2=(Integer) a.get(i+1);
			if(ele2-ele==2)
			{
				su++;
			}
		}
			
		System.out.println(su);
	}

}
