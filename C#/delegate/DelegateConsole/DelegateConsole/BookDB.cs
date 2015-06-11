using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DelegateConsole
{
    //Declare a type of Delegate
    public delegate void ProcessBookDelegate(Book book);

    public class BookDB
    {
        private ArrayList booklist = new ArrayList();

        public void AddBook(Book book)
        {
            booklist.Add(book);
        }

        // call delegates
        public void ProcessPaperbackBooks(ProcessBookDelegate processBook)
        {
            foreach(Book b in booklist)
            {
                if (b.Paperback)
                {
                    processBook(b);
                }
            }
        }
    }
}
