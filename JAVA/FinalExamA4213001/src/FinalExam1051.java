import java.io.*;

import pack2A.*;

public class FinalExam1051 {

	/* 
	 * 學號 : A4213001
	 * 姓名 : 郭先旻
	 */

	public static void main(String[] args) {
		String file = "C:/temp/FinalExamNews1051.txt";
		String[] words = {"財神爺", "農曆春節", "加碼"};
		int a=84, b=693;
		int[] arry={22,33,11,44,55};
		wordCountArray(file, words);
		System.out.println("-----------------------------------");
		System.out.printf("a=%s%n",factoring(a));
		System.out.printf("b=%s%n",factoring(b));
		System.out.println("-----------------------------------");
				Rank rank = new Rank(arry);
				rank.print();                //列印原始陣列順序
				rank.print(rank.getRank());  //排名
	}

	public static void wordCountArray(String file, String[] words){
		for(int i=0;i<words.length;i++){
			wordCount(file,words[i]);
		}
	}

	public static void wordCount(String file, String word){
		int count=0;
		int i=0;
		try {
			FileReader fr = new FileReader(file);
			BufferedReader bfr = new BufferedReader(fr);
			String str=bfr.readLine();
			String str2 = "";
			while(str!=null) {
				str2+=str;
				str=bfr.readLine();
			}
			while(i<=str2.length()-word.length()){
				if(str2.substring(i, i+word.length()).equals(word)){
					count++;
					i++;	
				}
				else{
					i++;
				}
			}
			fr.close();
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("【"+word+"】在文章中出現"+count+"次");
	}

	public static String factoring(int num){
		String ans = "";
		for(int i=2;num>1||i<num;i++){
			if(num%i==0){
				ans+=i;
				num/=i;
				if(num!=1){
					ans+="*";
				}
				i--;
			}
		}
		return ans;
	}

}
