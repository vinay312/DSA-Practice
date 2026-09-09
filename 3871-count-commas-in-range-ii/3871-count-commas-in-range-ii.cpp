class Solution {
public:
    long long countCommas(long long n) {

        long long start = 1;
        int comma = 0;
        long long count =0;
        long long end;

        long long numbers;

        while (start <=n){
            end = min(n, start*1000 - 1);
            numbers = end - start + 1;
            count += numbers*comma;

            comma++;
            start *= 1000;


        }

        return count;
        
    }
};