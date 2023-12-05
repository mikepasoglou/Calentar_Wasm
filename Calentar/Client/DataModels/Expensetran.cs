using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{


    public class Expensetran 
    {
        public int ID { get; set; }

        public string USERID { get; set; }

        [Required]
        public DateTime POSTDATE { get; set; } =DateTime.Now;   

        public DateTime DUEDATE { get; set; } = DateTime.Now;
        public bool REMINDER { get; set; } =false;
        public DateTime REMINDERDATE { get; set; } = DateTime.Now;

        [ForeignKey(nameof(Expenses))]
        public int EXPENSEID { get; set; }

        public decimal AMOUNT { get; set; }
        public string MEMO { get; set; } = string.Empty;


    }
}
