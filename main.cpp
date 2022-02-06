/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DeanSu
 *
 * Created on 2019年8月2日, 上午7:52
 */

#include "newfile.h"
#include "FindSmallest.h"
#include "NumberofPeopleinBus.h"
#include "GetMiddle.h"
#include "FindOdd.h"
#include "Digitize.h"
#include "sumTwoSmallestNumbers.h"
#include "TwoToOne.h"
#include "Utility.h"
#include "StockList.h"
#include "maxSequence.h"
#include "isValidWalk.h"
#include "convertFrac.h"
#include "MaxRotate.h"
#include "rot13.h"
/*
 * 
*/
int main(int argc, char** argv) {

    cout<<"Hello FindSmallest"<<endl;
    vector<int> it = {34, 15, 88, 2};
    printv(it);
    //vector<int> it = {34, -345, -1, 100};
    cout<<"Smallest:"<<FindSmallest1(it)<<endl;
    
    
    //pair<int, int> V = {5,8};
    vector<pair<int, int>> V2 = {{10,0}, {3,5}, {5,8}};
    cout<<"Number of People in Bus:" << number(V2)<<endl;
    
    cout<< "get_middle(\"test\"):" << get_middle("test") << endl;;
   cout<< "get_middle(\"testing\"):" << get_middle("testing") << endl;
   cout<< "get_middle(\"middle\"):" << get_middle("middle") << endl;
   cout<< "get_middle(\"equal\"):" << get_middle("equal") << endl;
   cout<< "get_middle(\"equal\"):" << get_middle("equal") << endl;
   
   cout<<"findOdd(V{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}), Equals(5):"<<findOdd(vector<int>{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5})<<endl;
   int a = 4, b = 8;
   cout<<"maxof(a, b):"<<maxof(a, b)<<endl;
   vector<int> rv = digitize1(123456); 
   
   //printv(rv);
   
   //cout<<"{5, 8, 12, 19, 22}13:"<<sumTwoSmallestNumbers(vector<int>{5, 8, 12, 19, 22})<<endl;
   //cout<<"{19, 5, 42, 2, 77}7:"<<sumTwoSmallestNumbers(vector<int>{19, 5, 42, 2, 77})<<endl;
   cout<<"{463049984, 1518133976, 831662965, 2089514692, 1683484464, 1166662097, 1840800420, 1404845183, 804725392, 1349503115}4000000000:"
            <<sumTwoSmallestNumbers(vector<int>{463049984, 1518133976, 831662965, 2089514692, 1683484464, 1166662097, 1840800420, 1404845183, 804725392, 1349503115})<<endl;
   
    TwoToOne tt;
    cout<<"aretheyhere, yestheyarehere, aehrsty:"<< tt.longest("aretheyhere", "yestheyarehere") <<endl;
    
    StockList sl;
    vector<string> vs1 = {"BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"};
    vector<string> vs2 = {"A", "B", "C", "D"};
    cout<<sl.stockSummary(vs1, vs2)<<endl;
    
    cout<<"maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4}), Equals(6):"<<maxSequence(vector<int>{-2, 1, -3, 4, -1, 2, 1, -5, 4})<<endl;
    
    cout<<"{'n','s','n','s','n','s','n','s','n','s'}:{true}:"<<isValidWalk(vector<char> {'n','s','n','s','n','s','n','s','n','s'})<<endl;
    cout<<"{'n','s','n','s','n','s','n','s','n','s','n','s'}:{false}:"<<isValidWalk(vector<char> {'n','s','n','s','n','s','n','s','n','s','n','s'})<<endl;
         
    std::vector<std::vector<unsigned long long>> r1 = { {1, 2}, {1, 3}, {1, 4} };
    cout<<"{ {1, 2}, {1, 3}, {1, 4} }(6, 12), (4, 12), (3, 12):"<<Fracts::convertFrac(r1)<<endl;
    MaxRotate MR;
    cout<<"max_rot(56789) should return 68957:"<<MR.maxRot(56789)<<endl;
    cout<<"max_rot(38458215) should return 85821534:"<<MR.maxRot(38458215)<<endl;

    cout<<"rot13(\"test\"), Equals(\"grfg\")):"<<rot13("test")<<endl;
    cout<<"rot13(\"Test\"), Equals(\"Grfg\")):"<<rot13("Test")<<endl;
    cout<<"rot13(\"AbCd\"), Equals(\"NoPq\")):"<<rot13("AbCd")<<endl;
    return 0;
}

