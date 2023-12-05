using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Calentar.DataTables
{

    
    public class Expenses
    {
        public int Id { get; set; }
        public string Userid { get; set; }
        public string Descript { get; set; }
        public int Category { get; set; }
        public decimal  Sumamount { get; set; }
        public string Memo { get; set; }

    }


}
