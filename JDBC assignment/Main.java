import java.sql.*;
import java.util.Scanner;

class Databse 
{
   public Connection conn ;
   public Statement stmt ;  

   public Databse( String DBname ,String UserName ) throws Exception 
   {
      conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/"+DBname , UserName, "" );
      stmt = conn.createStatement();
   }
   
   public void readData( String tableName ) throws Exception
   {
      ResultSet rs = stmt.executeQuery("SELECT * FROM " + tableName );
      
      while (rs.next()) 
      {
         System.out.print("\nID: " + rs.getInt("Player_ID"));
         System.out.print("\tName: " + rs.getString("Name"));
         System.out.println("\t Position: " + rs.getString("Pos"));
         System.out.println();
      }
   }

   public void createTable(  ) throws Exception
   {
      Scanner IN = new Scanner( System.in );

      // Creating a new table called ManUtd

      System.out.println( "Enter query to create new table :" );

      String creatString = IN.nextLine();
      stmt.executeUpdate(creatString);


   }

   public void insertValues() throws Exception
   {
      Scanner IN = new Scanner( System.in );
      System.out.println( "Enter query to insert values" );
      stmt.executeUpdate( IN.nextLine() );
    

   }

   public void deleteTable ( String tableName ) throws Exception
   {
      stmt.executeUpdate("drop table " + tableName);
   }

   public void updateTable() throws Exception
   {
      Scanner IN = new Scanner( System.in );
      System.out.println( "Enter update or alter query" );
      stmt.executeUpdate( IN.nextLine() );
      

   }
}
   

class Main
{
    public static void main( String[] args) 
   {
      Scanner IN = new Scanner(System.in);


      System.out.println("Enter Database name ");
      String DBname = IN.nextLine();

      System.out.println("Enter Username ");
      String UserName = IN.nextLine();
      try
      {
         Databse database = new Databse( DBname , UserName );
         
         database.createTable();

         database.insertValues();

         System.out.println("Enter table name");
         database.readData(IN.nextLine());

         database.updateTable();

         System.out.println("Enter table name that you want to delete");
         database.deleteTable( IN.nextLine() );
      }

      catch(Exception e) 
      {
         e.printStackTrace();
      } 
     finally{
      IN.close();
     }
      

    
   }
}

   


























