using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{

    public class Incometran
    {
        [Key]
        public int ID { get; set; }

        //[ForeignKey(nameof(Hbusers))]
        public string USERID { get; set; }

        [Required]
        public DateTime POSTDATE { get; set; } = DateTime.Now;

        public DateTime DUEDATE { get; set; } = DateTime.Now;
        public bool REMINDER { get; set; } = false;
        public DateTime REMINDERDATE { get; set; } = DateTime.Now;

        [ForeignKey(nameof(Income))]
        public int INCOMEID { get; set; }

        public decimal AMOUNT { get; set; }
        public string MEMO { get; set; } = string.Empty;


    }
}
