using Microsoft.Extensions.Primitives;
using System.Net.Http.Json;
using System.Text;
using static Calentar.Client.Pages.UserPages.Login;

namespace Calentar.Client.DataModels
{
    public class ErrorResponse
    {
        public string type { get; set; }
        public int Status { get; set; }
        public string Traceid { get; set; }
        public Dictionary<string, string[]> Errors { get; set; }

        
        /*
       private HttpResponseMessage _response;
       public  ErrorResponse(HttpResponseMessage  currespone)
       {
           _response = currespone;
       }
        */


      public static async Task<ErrorResponse> FromHttpResponseAsync(HttpResponseMessage response)
            {
                if (response != null && response.Content != null)
                {
                    try
                    {
                        return await response.Content.ReadFromJsonAsync<ErrorResponse>();
                    }
                    catch (Exception ex)
                    {
                        //log the errors
                        throw new ApplicationException("Error deserializing response content.", ex);
                    }
                }
                return null; // or throw an exception or return a default value if appropriate
            }


        public string GetErrorString()
        {
            string ErrorMes = string.Empty;
            ErrorMes += Status + "  ";
            if (Errors != null)
            {
                if (Errors.Keys.Count > 0)
                {
                    foreach (var errorKey in Errors.Keys)
                    {
                        string[] errorMessages = Errors[errorKey];
                        foreach (var errorMessage in errorMessages)
                        {
                            StringBuilder errorBuilder = new StringBuilder();
                            errorBuilder.Append(errorKey).Append("   ").Append(errorMessage).Append("  ");
                            ErrorMes = errorBuilder.ToString();

                        }
                    }
                }
            }

            return ErrorMes;
        }






























    }
}
