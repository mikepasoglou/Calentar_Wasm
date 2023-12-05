namespace Calentar.Client
{
    public interface ISessionService
    {

        public string GetValue(string key);
        public void SetValue(string key, string value);

    }
}
