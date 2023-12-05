using Microsoft.JSInterop;

namespace Calentar.Client
{
    public class SessionService : ISessionService
    {
        private readonly IJSRuntime _jsRuntime;

        public SessionService(IJSRuntime jsRuntime)
        {
            _jsRuntime = jsRuntime;
        }

        public string GetValue(string key)
        {
            return _jsRuntime.InvokeAsync<string>("sessionStorage.getItem", key).Result;
        }

        public void SetValue(string key, string value)
        {
            _jsRuntime.InvokeVoidAsync("sessionStorage.setItem", key, value);
        }
    }
}
