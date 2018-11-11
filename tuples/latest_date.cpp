#include <iostream>
#include <utility>
#include <tuple>

using namespace std;

tuple<int, int, int> get_date();
void print_date(tuple<int, int, int> date);

int main()
{
    int n;
    cin >> n;
    tuple<int, int, int> max_date = get_date();
    
    for(int i = 1; i < n; i++)
    {
        tuple<int, int, int> cur_date = get_date();
        if(cur_date > max_date)
            max_date = cur_date;
        
    }
    print_date(max_date);
    return 0;
    
}
tuple<int, int, int> get_date()
{
    int d, m, y;
    
    cin >> d >> m >> y;
    
    tuple<int, int, int> date = make_tuple(y, m, d);

    return date;
}
void print_date(tuple<int, int, int> date)
{
    cout << get<2>(date) << " " <<
            get<1>(date) << " " <<
            get<0>(date) << endl;
}
