#include <iostream>

using namespace std;

struct Peak {
    char namePeak[16];  //чар набагато швидший ніж стрінг тому використовую його
    unsigned long heightPeak;
};


void insertionSort( Peak* peakArr, unsigned short peakNum) {
    for(int i = 1; i < peakNum; i++) {         //приймаємо що нульовий елем відсортований, починаємо з першого еле-у невідсортованої таблиці
        if(peakArr[i].heightPeak < peakArr[i-1].heightPeak) { //дивимось чи взагалі слідуючий елем менший від попереднього
            Peak temp;
            temp = peakArr[i]; //темп - це число яке ми будемо пробувати записати перед попереднім 
            int j = i - 1; //вказує на останній елем в відсортованій таблиці
            //вайл займається тим що зміщує елемент вліво і знаходить для нього підходяще місце
            while(j >= 0 && peakArr[j].heightPeak > temp.heightPeak) { //дивимось чи не пішло в мінус і зрівнюємо чи попередній елем більше за наступний
                peakArr[j + 1] = peakArr[j];
                j--; //коли джи буде менша від 0 (масив буде відсортований) то вийдемо з вайла назавжди
            }
            peakArr[j + 1] = temp;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    short setNum;
    unsigned short peakNum;
    unsigned long height;
    string name;

    cin >> setNum;
    int i = 0;
    while(i < setNum) {
        cin >> peakNum;
        Peak* peakArr = new Peak[peakNum]; //робимо таблицю структур

        for(int j = 0; j < peakNum; j++) {
            cin >> peakArr[j].namePeak >> peakArr[j].heightPeak;         
        }

        insertionSort(peakArr, peakNum);
        
        //в спочатку степені двійки 
        for(int l = 0; l < peakNum; l++) { //прочитати на фото for_algor2_pow_of_2
            if ((peakArr[l].heightPeak & (peakArr[l].heightPeak-1)) == 0)
            {
                cout << peakArr[l].namePeak << "-" << peakArr[l].heightPeak << " ";
            }  
        }

        for(int l = 0; l < peakNum; l++) {
            if ((peakArr[l].heightPeak & (peakArr[l].heightPeak-1)))
            {
                cout << peakArr[l].namePeak << "-" << peakArr[l].heightPeak << " ";
            }  
        }
        
        i++;
        cout << '\n';
        delete[] peakArr;
    }
    
    return 0;
}