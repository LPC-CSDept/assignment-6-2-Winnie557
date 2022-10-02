//
#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{       
        double result = 1;
        for(int i = 0; i < n; i++){
                result = result * 2;
        }     
        return result;       
        // return n_th power number
}
double nthpowern(int n)
{
        double result = 1;
        for(int i = 0; i > n; i--){
            result = result/2;
        }
        return result;
        // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;       
}

int main(){
        int n; 
        double result;
        cout << "Enter your input \n";
        cin >> n;
        if(n>0){
                result = nthpowerp(n);
        } 
        else if(n<0){
            result = nthpowern(n);
        }
        else{
                result =1;
        }
        printout(result);
}

