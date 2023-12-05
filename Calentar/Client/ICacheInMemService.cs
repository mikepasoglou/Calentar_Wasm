
namespace Calentar.Client
{
    public interface ICacheInMemService
    {

        public string GetCachedData(string key);
        public void SetCacheData(string key, string data, TimeSpan expirationTime);



    }
}
