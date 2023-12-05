using System.ComponentModel.DataAnnotations;

namespace Calentar.Client
{
    public class ShedulerEvent
    {

        public int Id { get; set; }
        [Required(ErrorMessage = "StartDate is required")]
        public DateTime StartDate { get; set; }
        public DateTime EndDate { get; set; }
        [Required]
        [StringLength(20, MinimumLength = 1, ErrorMessage = "Message must be between 1 and 20 characters.")]
        public string Message { get; set; }
        public string Memo { get; set; }
        public int Level { get; set; }
        public bool IsDayEvent { get; set; }
       // public IFormFile FileAttachment { get; set; }

        /*
        public ShedulerEvent(DateTime curDate)
        {
            StartDate = curDate;
            EndDate = curDate.AddHours(1);
            Message = string.Empty;
            Memo = string.Empty;
            Level = 0;

        }


        public ShedulerEvent()
        {

        }
        */
        /*
        public enum Pririority
        {
              

        }*/

    }

}
