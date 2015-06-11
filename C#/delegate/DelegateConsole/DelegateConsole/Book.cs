using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace DelegateConsole
{
    public struct Book
    {
        public string Title;
        public string Author;
        public bool Paperback;
        public double Price;
        
        public Book(string title, string author, bool paperBack, double price)
        {
            Title = title;
            Author = author;
            Paperback = paperBack;
            Price = price;
        }
    }
}
