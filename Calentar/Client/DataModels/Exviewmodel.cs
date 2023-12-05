using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{
    public class Exviewmodel
    {

            public int Exviewid { get; set; }
            public string Descript { get; set; }
            public string Userid { get; set; }
          
            public string CatDescript { get; set; }
            public decimal CatSumamount { get; set; }
            public decimal ExSumamount { get; set; }
            public string Memo { get; set; }




    }
}
