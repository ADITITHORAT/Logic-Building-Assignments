import java.util.Scanner;   //TIME COMPLEXITY O(N)
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0,iCnt=0;
    for(i = iRow ,iCnt=1;i>=1 ;i--)
    {
      for(j=1;j<=iCol;j++,iCnt++)
      {
        if(iCnt>9)
        {
          iCnt = 1;
        }
        System.out.print(iCnt+"\t");
      }
      System.out.println("\n");
    }
  }
}
public class program1
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
