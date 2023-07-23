#include <iostream>
//#include <sstream>
#include <limits>

int main()
{
    using namespace std;
    
    int W, H, T, N;
    cin >> T;
    int room_number;
    
    while(T > 0)
    {
        cin >> H >> W >> N;
        if(N%H * 100 == 0){
            room_number = H * 100 + (N/H);
            }            
        else
        {
            
            room_number = (N%H * 100) + (N/H + 1);
            
        }
        cout << room_number << endl;
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        --T;
    }
    
    /*
     * H W  N
     * 6 12 10
     * ############
     * ############
     * #0##########
     * ############
     * ############
     * ############
     * 
     * H / N == 1
     * H % N == 4
     * j + i * height
     * 4 * 100 + 1 +1
     * 
     * */
    return 0;
}