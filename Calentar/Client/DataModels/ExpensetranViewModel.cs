using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{
    public class ExpensetranViewModel
    {
        public int ID { get; set; }
        public string USERID { get; set; }
        public string POSTDATE { get; set; }
        public string DUEDATE { get; set; } 
        public bool REMINDER { get; set; }
        public string REMINDERDATE { get; set; }
        public int EXPENSEID { get; set; }
        public string ExpenseName { get; set; }
        public decimal AMOUNT { get; set; }
        public string MEMO { get; set; }
        public DateTime POSTDATE_date { get; set; }  //i use that for sort   -- order by -  



    }


}

