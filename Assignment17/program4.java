import java.util.Scanner; // TIME COMPLEXITY O(N^2)
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
        if((i == j) || (i == 1) || (j == 1) || (i == iRow) || (j == iCol))
        {
          System.out.print("*\t"); 
        }
        else if(j > i)
        {
          System.out.print("#\t"); 
        }
        else 
        {
          System.out.print("$\t"); 
        }
              
      }
      System.out.println("\n");
    }
  }
}
public class program4
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


