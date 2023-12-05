using System.ComponentModel.DataAnnotations.Schema;

namespace Calentar.DataTables
{
    
    public class AppointmentPROSO
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

        /*
        public Appointment(int ID_, string USERID_, DateTime STARTDATE_, DateTime ENDDATE_, string MESSAGE_, int EXTRANID_, int INTRANID_, bool ALLDAY_, int COLORCAT_)
        {
            this.ID = ID_;
            this.USERID = USERID_;
            this.STARTDATE = STARTDATE_;
            this.ENDDATE = ENDDATE_;
            this.MESSAGE = MESSAGE_;
            this.EXTRANID = EXTRANID_;
            this.INTRANID = INTRANID_;
            this.ALLDAY = ALLDAY_;
            this.COLORCAT = COLORCAT_;
        }
        */
    }

}
