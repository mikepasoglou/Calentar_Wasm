using System.Net.Mail;
using System.Net;

namespace Calentar.Client
{
    public class EmailHandler
    {
        private string _useremail, _message;
        public  EmailHandler(string Useremail, string Message)
        {
            _useremail = Useremail;
            _message = Message;
        }


        public bool SenMail()
        {
            try
            {
                using (SmtpClient client = new SmtpClient("mail.carparking.gr"))
                {
                    // Set the SMTP server and port (e.g., Gmail's SMTP server and port 587)
                    client.Port = 587;
                    
                    client.EnableSsl = true;

                    // Create a new MailMessage object
                    using (MailMessage message = new MailMessage())
                    {
                        // Set the sender's email address
                        message.From = new MailAddress("mp@carparking.gr");

                        // Set the recipient's email address
                        //message.To.Add("pasoglou.michalis@gmail.com");
                        message.To.Add(_useremail);

                        // Set the subject and body of the email
                        message.Subject = "Home Budget Calendar";
                        message.Body = _message;
                        //message.Attachments=

                        // Send the email
                        client.Send(message);
                        return true;
                        // Console.WriteLine("Email sent successfully.");
                    }
                }
            }
            catch (Exception ex)
            {
                return false;
            }



        }


    }
}
