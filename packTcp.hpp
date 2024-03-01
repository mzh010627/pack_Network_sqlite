#ifndef __TCP_H_
#define __TCP_H_
    class Tcp
    {
    private:
        int sockfd;
        int cilentfd;
        int acceptfd;
    public:
        /* 构造函数 */
        Tcp();
        /* 析构函数 */
        ~Tcp();
    };
    
    


#endif