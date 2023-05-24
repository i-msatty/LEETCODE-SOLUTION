class Solution
{
public:
    string ans = "";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        ans = longUrl;
        return "url";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return ans;
    }
};