import java.util.Scanner; 
class Pattern
{
  public void Display(int iRow,int iCol)
  {
    int i = 0,j = 0;
    if(iRow != iCol)
    {
      System.out.println("Invalid Input");
      return ;
    }
    for(i = 1 ;i<=iRow ;i++)
    {
      for(j=iCol;j>=1;j--)
      {
        if(j>=i)
        {
          System.out.print("*\t"); 
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


