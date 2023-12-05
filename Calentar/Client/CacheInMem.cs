using Microsoft.Extensions.Caching.Memory;

namespace Calentar.Client
{
    public class CacheInMemService : ICacheInMemService
    {

        //private readonly IMemoryCache _memoryCache;

        private  IMemoryCache _memoryCache;

        public CacheInMemService(IMemoryCache memoryCache)
        {
            _memoryCache = memoryCache;
        }

        public string GetCachedData(string key)
        {
            return _memoryCache.Get<string>(key);
        }

        public void SetCacheData(string key, string data, TimeSpan expirationTime)
        {
            _memoryCache.Set(key, data, expirationTime);
        }

        public void DeleteCacheData(string key)
        {
            _memoryCache.Remove(key);
        }


    }
}
