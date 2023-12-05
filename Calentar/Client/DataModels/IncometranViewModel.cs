namespace   Calentar.DataTables
{

    public class IncometranViewModel
    {
        public int ID { get; set; }
        public string USERID { get; set; }
        public string POSTDATE { get; set; }
        public string DUEDATE { get; set; }
        public bool REMINDER { get; set; }
        public string REMINDERDATE { get; set; }
        public int INCOMEID { get; set; }
        public string IncomeName { get; set; }
        public decimal AMOUNT { get; set; }
        public string MEMO { get; set; }
        public DateTime POSTDATE_date { get; set; }  //i use that for sort   -- order by -  



    }



}
