#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
   	int n;
   	cin >> n;
   	
   	vector<int> a(n);
   	int total_odds = 0;
   	int first_odd = -1;
   	int last_odd = -1;
   	
   	for (int i = 0; i < n; i++)
   	{
   	cin >> a[i];
   	if (a[i] % 2 != 0)
   	{
   	    total_odds++;
   	    if (first_odd == -1)
   	    {
   	       first_odd = i + 1; 
   	    }
   	    last_odd = i + 1;
   	    
   	}
}
   if (total_odds % 2 == 0)
   {
       cout << n << "\n";
       
   }
    else 
    {
        int ans = max(n - first_odd , last_odd - 1);
        cout << ans << "\n";
        
    }
}
       

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna