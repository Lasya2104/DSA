class tweet{
    public:
        int tweetid;
        int time;
        tweet* next;
        tweet(int tw,int t)
        {
            tweetid=tw;
            time=t;
            next=NULL;
        }
};
class follower{
    public:
        int followerid;
        follower* next;
        follower(int f)
        {
            followerid=f;
            next=NULL;
        }
};
class Twitter {
private:
    int timer=0;
    //user and tweets
    unordered_map<int,vector<pair<int,int>>>tweetmap;
    //user and followers
    unordered_map<int,unordered_set<int>>followmap;
public:
    Twitter() {
        timer=0;
    }
    
    void postTweet(int userId, int tweetId) {
        tweetmap[userId].push_back({timer++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<pair<int,int>>alltweets;
        //users
        for(auto &p:tweetmap[userId])
        {
            alltweets.push_back(p);
        }
        //followers
        for(int followee:followmap[userId])
        {
            for(auto &t:tweetmap[followee])
            {
                alltweets.push_back(t);
            }
        }
        sort(alltweets.rbegin(),alltweets.rend());
        vector<int>res;
        for(int i=0;i<min(10, (int)alltweets.size());i++)
        {
            res.push_back(alltweets[i].second);
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        if(followerId==followeeId)return;
        followmap[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followmap[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */