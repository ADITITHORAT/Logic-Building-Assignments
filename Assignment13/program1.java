import java.util.Scanner; // TIME COMPLEXITY O(N^2)
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0;
    
    for(i=1;i<=iRow;i++)
    {
      char ch ='A';
      for(j=1;j<=iCol;j++,ch++)
      {
        System.out.print(ch+"\t");
      }
      System.out.println("\n");
    }
  }
}
public class program1 {
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
