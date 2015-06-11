using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DelegateConsole
{

    public class Program
    {
        static void PrintTitle(Book b)
        {
            Console.WriteLine("{0}", b.Title);
        }

        static void Main(string[] args)
        {

            /*********Simple Delegate*********/

            BookDB bookDB = new BookDB();
            bookDB.AddBook(new Book("Title 1", "Author1", true, 0.1));
            bookDB.AddBook(new Book("Title 2", "Author2", false, 0.2));
            bookDB.AddBook(new Book("Title 3", "Author3", true, 0.1));
            bookDB.AddBook(new Book("Title 4", "Author4", false, 0.2));
            bookDB.AddBook(new Book("Title 5", "Author5", true, 0.1));

            PriceCalculator calculator = new PriceCalculator();

            bookDB.ProcessPaperbackBooks(new ProcessBookDelegate(calculator.PrintPrice));
            bookDB.ProcessPaperbackBooks(new ProcessBookDelegate(PrintTitle));

            calculator.PrintPriceTotal();
            Console.ReadLine();




            /*********Compose Delegate*********/
            
            ComposeDelegate a, b, c, d;

            // Create the delegate object a that references 
            // the method Hello:
            a = new ComposeDelegate(Hello);
            // Create the delegate object b that references 
            // the method Goodbye:
            b = new ComposeDelegate(Goodbye);
            // The two delegates, a and b, are composed to form c: 
            c = a + b;
            // Remove a from the composed delegate, leaving d, 
            // which calls only the method Goodbye:
            d = c - a;

            Console.WriteLine("Invoking delegate a:");
            a("A");
            Console.WriteLine("Invoking delegate b:");
            b("B");
            Console.WriteLine("Invoking delegate c:");
            c("C");
            Console.WriteLine("Invoking delegate d:");
            d("D");

            Console.ReadLine();
        }

        public static void Hello(string s)
        {
            Console.WriteLine("  Hello, {0}!", s);
        }

        public static void Goodbye(string s)
        {
            Console.WriteLine("  Goodbye, {0}!", s);
        }

        delegate void ComposeDelegate(string s);
    }
}
