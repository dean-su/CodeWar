#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

class BuyCar
{

  public:
  //static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);
  static std::vector<int> nbMonths(double startPriceOld, double startPriceNew, double savingperMonth, double percentLossByMonth);
};

//std::vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth){
std::vector<int> BuyCar::nbMonths(double startPriceOld, double startPriceNew, double savingperMonth, double percentLossByMonth){

    if(startPriceOld >= startPriceNew) {
        return vector<int> {0, int(startPriceOld - startPriceNew)};
    }

    int month = 0;
    double total = startPriceOld;
    
    while (total < startPriceNew)
    {
        total += savingperMonth;
        total -= startPriceOld * percentLossByMonth / 100;

        startPriceOld -= startPriceOld * percentLossByMonth / 100;
        startPriceNew -= startPriceNew * percentLossByMonth / 100;
        
        month ++;
        month % 2 != 0?  percentLossByMonth += 0.5 : percentLossByMonth;
        cout<< total - startPriceNew <<endl;
    }
    
   

    return vector<int> {month, int(round(total - startPriceNew))};
}

/*
vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
{
  int mth = 0;
  double priceOld = static_cast<double>(startPriceOld);
  double priceNew = static_cast<double>(startPriceNew);
  double available = static_cast<double>(startPriceOld);
  while (available < priceNew)
  {
    // at the end of this month
    mth += 1;
    if (mth % 2 == 0)
    {
      percentLossByMonth = percentLossByMonth + 0.5;
    }
    priceOld = priceOld * (100 - percentLossByMonth) / 100;
    priceNew = priceNew * (100 - percentLossByMonth) / 100;
    available = mth * savingperMonth + priceOld;
  }
  vector<int> res = {mth, static_cast<int>(available - priceNew + .5)};
  return res;
}
end month 1: percentLoss 1.5 available -4910.0
end month 2: percentLoss 2.0 available -3791.7999...
end month 3: percentLoss 2.0 available -2675.964
end month 4: percentLoss 2.5 available -1534.06489...
end month 5: percentLoss 2.5 available -395.71327...
end month 6: percentLoss 3.0 available 766.158120825...
return [6, 766] or (6, 766)
*/
int main(){

    cout<< "Buying car..."<<endl;
    BuyCar b;
    vector<int> ans1 = b.nbMonths(2000, 8000, 1000, 1.5);//766
    for (auto i : ans1)
        cout<< i <<" ";
}