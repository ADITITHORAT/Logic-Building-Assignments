import java.util.Scanner;    // TIME COMPLEXITY O(N^2)
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0;
    char ch1 ='\0',ch2='\0';
    for(i=1;i<=iRow;i++)
    {
      
      for(j=1,ch1='A',ch2='a';j<=iCol;j++,ch1++,ch2++)
      {
        if(i%2 ==0)
        {
          System.out.print(ch2+"\t");
        }
        else
        {
          System.out.print(ch1+"\t");
        }
        
      }
      System.out.println("\n");
    }
  }
}
public class program2
 {
  public static void main(String[] args) 
  {
      int iValue1 = 0,iValue2 = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number of rows: ");
      iValue1 = sobj.nextInt();
      System.out.println("Enter the number of cols: ");
      iValue2 = sobj.nextInt();
      Pattern pobj = new Pattern();
      pobj.Display(iValue1,iValue2);

  }
}
