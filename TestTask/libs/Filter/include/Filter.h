#ifndef FILTER_H
#define FILTER_H
#include <vector>


class Filter{
   public:
        virtual std::vector<double> filtration(std::vector<double> &in,int windowSize)=0;

};

class FilterMovingAverageNonRec: public Filter{
    public:
        std::vector<double> filtration(std::vector<double> &in,int windowSize) override;
};


class FilterMovingAverageRec: public Filter{
    public:
        std::vector<double> filtration(std::vector<double> &in,int windowSize) override;
};

class FilterLowPass{
    int lengthFilter;

    public:
    FilterLowPass(int lengthFilter);
    std::vector<double> filtration(std::vector<double> &in, double inpuSampleRate, double passFreq,double suppressFreq);
};

#endif // FILTER_H
