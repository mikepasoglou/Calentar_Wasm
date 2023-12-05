using System.ComponentModel.DataAnnotations;

namespace Calentar.Client
{
    public class AppointmentVM
    {
        public int ID { get; set; }
        public string USERID { get; set; }
        public DateTime STARTDATE { get; set; }
        public DateTime ENDDATE { get; set; }
        public string MESSAGE { get; set; }

        public int EXTRANID { get; set; }

        public int INTRANID { get; set; }
        public bool ALLDAY { get; set; }
        public int COLORCAT { get; set; }
    }
}
