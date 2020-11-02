#ifndef DESELSORT_H_INCLUDED
#define DESELSORT_H_INCLUDED
template <class T>
    void double_ended_selection(T a[], int n){
        T min;
        T max;
        int pass = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        min = a[i];
        max = a[i];
        int min_i = i, max_i = i;
        for (int k = i; k <= j; k++)  {
            if(a[k] > max) {
                max = a[k];
                max_i = k;
            } if(a[k] < min) {
                min = a[k];
                min_i = k;
            }
        }
        T temp = a[i];
        a[i] = a[min_i];
        a[min_i] = temp;
                if(a[i] != a[min_i]){
                std::cout << "Swap " << a[i] << " and " << a[min_i] << std::endl;
                }

        if (a[min_i] == max){
            T temp = a[j];
            a[j] = a[min_i];
            a[min_i] = temp;
                if(a[i] != a[min_i]){
                std::cout << "Swap " << a[j] << " and " << a[min_i] << std::endl;
                }

        }
        else{
            T temp = a[j];
            a[j] = a[max_i];
            a[max_i] = temp;
                if(a[i] != a[max_i]){
                std::cout << "Swap " << a[j] << " and " << a[max_i] << std::endl;
                }


    }
    std::cout << "Pass " << pass << ": ";
    for(int i = 0; i < n; i++){
        std::cout << a[i] << ", ";
    }
    std::cout << "\n";
    pass++;
    }
    }


#endif // DESELSORT_H_INCLUDED
