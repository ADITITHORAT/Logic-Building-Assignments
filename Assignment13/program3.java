import java.util.Scanner; // TIME COMPLEXITY O(N^2)
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0;
    char ch ='\0';
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
      for(j =1 ;j<=iCol;j++)
      {
       System.out.print(ch+"\t");
      }
      System.out.println("\n");
    }
  }
}
public class program3
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
