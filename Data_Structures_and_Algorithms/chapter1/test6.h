#ifndef Currency_H_
#define Currency_H_
enum SignType {kPlus, kMinus};

class Currency
{
    public:
        Currency(SignType the_sign = kPlus, unsigned int the_dollars = 0,
                 unsigned int the_center = 0)
                 : sign_{the_sign}, dollars_{the_dollars}, cents_{the_center}{}
        ~Currency(){}
        void SetValue(SignType, unsigned int, unsigned int);
        void SetValue(double);
        SignType GetSign() const
        {
            return sign_;
        }

        unsigned int GetDollars() const 
        {
            return dollars_;
        }
        
        unsigned int GetCents() const
        {
            return cents_;
        }

        Currency Add(const Currency&) const;
        Currency& Increment(const Currency&);
        void OutPut() const;

    private:
        SignType sign_;
        unsigned int dollars_;
        unsigned int cents_;
};

#endif
