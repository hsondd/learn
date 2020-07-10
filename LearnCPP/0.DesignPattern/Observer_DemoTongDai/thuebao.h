#ifndef THUEBAO_H
#define THUEBAO_H
#include <string>
#include  <observer.h>

class Thuebao : public Observer
{
private:
    std::string strsothuebao;
public:
    Thuebao();
    ~Thuebao();
    Thuebao(std::string sothuebao);
    virtual void update(const char * message);
};

#endif // THUEBAO_H
