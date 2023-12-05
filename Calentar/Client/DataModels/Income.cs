using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{

    public class Income
    {
        public int Id { get; set; }
        public string Userid { get; set; }
        public string Descript { get; set; }
        public int Category { get; set; }
        public decimal Sumamount { get; set; }
        public string Memo { get; set; }
    }

}
