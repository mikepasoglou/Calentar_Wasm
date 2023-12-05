using System.ComponentModel.DataAnnotations;

namespace Calentar.DataTables
{
    public class RegistrationModel
    {
        [Required(ErrorMessage = "User Name is required")]
        public string Username { get; set; }

        //[Required(ErrorMessage = "Name is required")]
        public string FirstName { get; set; }

        public string LastName { get; set; }

        [EmailAddress]
        [Required(ErrorMessage = "Email is required")]
        public string Email { get; set; }

        [Required(ErrorMessage = "Password is required")]
        [RegularExpression(@"^(?=.*[a-z])(?=.*[A-Z])(?=.*\W).{6,}$", ErrorMessage = "Password must contain at least one uppercase letter, one lowercase letter, one special character, and be at least 6 characters long.")]
        public string Password { get; set; }
    }
}
