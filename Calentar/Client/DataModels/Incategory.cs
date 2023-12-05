using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{


    public class Incategory
    {
        public int Id { get; set; }
        public string Descript { get; set; }
        public string Userid { get; set; }
        public decimal Sumamount { get; set; }

    }
}
