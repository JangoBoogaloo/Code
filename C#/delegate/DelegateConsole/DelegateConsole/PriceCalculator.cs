using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DelegateConsole
{
    public class PriceCalculator
    {
        private double priceTotal = 0;
        
        internal void AddBookToTotal(Book book)
        {
            priceTotal += book.Price;
        }

        internal void PrintPrice(Book book)
        {
            Console.WriteLine("Price: {0}$", book.Price);
        }

        internal void PrintPriceTotal()
        {
            Console.WriteLine("Price Total: {0}$", priceTotal);
        }
    }
}
