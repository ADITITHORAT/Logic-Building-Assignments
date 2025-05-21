import java.util.Scanner;  //TIME COMPLEXITY O(N)
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0;
   
   
    for(i = 0 ;i<=iRow-1 ;i++)
    {
      for(j=i+1;j<=iCol+i;j++)
      {
       
          System.out.print(j+"\t");
       
      }
      System.out.println("\n");
    }
  }
}
public class program5
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
