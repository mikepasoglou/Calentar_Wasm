using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Security;

namespace Calentar.DataTables
{

        public class Excategory
        {
            [Key]
          //  [ForeignKey(nameof(Expenses))]  //?????
        //[ForeignKey(nameof(HBUSERS))]
            public int Id { get; set; }



        [Required(ErrorMessage ="Must Be Not null")]
        [MinLength(2)]
        [MaxLength(10)]
        public string? Descript { get; set; }

        [Required(ErrorMessage = "Not null")]
        public string? Userid { get; set; }


        public decimal Sumamount { get; set; }
            
        }
}
