class Solution {
public:

    int nthUglyNumber(int n) {

        int arr[n+1];
        arr[0] = 1;
        int I,J,K,i=0,j=0,k=0;

        for(int p =1;p<=n;p++)
        {
            I = arr[i]*2;
            J = arr[j]*3;
            K = arr[k]*5;

            if(I == min(I,min(J,K)))
            arr[p] = I,i++;

            if(J == min(I,min(J,K)))
            arr[p] = J,j++;

            if(K == min(I,min(J,K)))
            arr[p] = K,k++;
        }
        return arr[n-1];
    }
    
};