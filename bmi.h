#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

class BMI_counting{
        public:
//              string cate
                void setCategory(float bmi)
                {
                        if(bmi<15)
                        {
                                cat = "Very Severely Underweight";
                        }
                        else if(bmi >= 15 && bmi <16)
                                {
                                        cat = "Severely Underweight";
                                }
                                else if(bmi >= 16 && bmi <18.5)
                                        {
                                                 cat = "Underweight";
                                        }
                                         else if(bmi >= 18.5 && bmi <25)
                                                {
                                                        cat = "Normal";
                                                }
                                                else if(bmi >= 25 && bmi <30)
                                                        {
                                                                 cat = "Overweight";
                                                        }
                                                        else if(bmi >= 30 && bmi <35)
                                                                 {
                                                                         cat = "Obese Class I (Moderately obese)";
                                                                 }
                                                                else if(bmi >= 35 && bmi <40)
                                                                        {
                                                                                 cat =  "Obese Class II (Severely obese)";
                                                                        }
                                                                    else if(bmi >= 40)
                                                                                  {
                                                                                         cat = "Obese Class III (Very severely obese)";
                                                                                  }
                }


                string getCategory()
                {
                        return cat;
                }


                void setBMI(int height, int weight)
                {
                        h = height;
                        w = weight;
                        bmi = 10000*w/h/h;
                }

                float getBMI()
                {
                        return bmi;
                }
        private:
                float h;
                float w;
                float bmi;
                string cat;
};

