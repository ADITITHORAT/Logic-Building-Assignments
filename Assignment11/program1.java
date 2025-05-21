import java.util.Scanner;
// TIME COMPLEXITY O(N)
class Pattern
{
  public void Display(int iCol)
  {
    int i = 0;
    char ch ='\0';
    
    for(i = 1 ,ch='A'; i<=iCol;i++,ch++)
    {
      System.out.print(ch+"\t");
      
    }
  }
}
public class program1 
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
