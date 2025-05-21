import java.util.Scanner;
// TIME COMPLEXITY O(N)
class Pattern
{
  public void Display(int iCol)
  {
    int i = 0;
    for(i = 1;i<=iCol;i++)
    {
      System.out.print("#\t"+i+"\t*\t");
    }
  }
}
public class program4
{
  public static void main(String[] args)
   {
      int iValue = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number of Elements: ");
      iValue = sobj.nextInt();
      Pattern pobj = new Pattern();
      pobj.Display(iValue);

  }
}
