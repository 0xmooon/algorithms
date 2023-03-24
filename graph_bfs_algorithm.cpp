#include <iostream>
#include <vector>
#include <queue> // очередь
#include <map>
using namespace std;

struct Village{ 
    vector<int> neighbors; //сусіди
    bool used = false; //навідане село, фолс, бо ми ще ні в кого не були
};


int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    queue<pair<int, int>> Queue; //черга, яка зберігає пару індекс і дистанція
    int villnum = 0; 
    int searchvillnum; //кількість шуканих сіл
    string startVill; 
    cin>>villnum;
    map<string,int> villsmap; //мапа в якій зберігаємо назву села і його індекс
    Village vills[villnum]; 
    string villname; 
    cin>>searchvillnum; 
    int endVills[searchvillnum]; //індекси шуканих сіл
    int x = 0; //кількість розмежувачів (= кількості сіл)
    for (int i = 0; i < villnum; i++) { //заповнюємо мапу назвами усіх можливих сіл
        cin>>villname;
        villsmap[villname]=i;
    }

    for (int i = 0; x<villnum; i++) { //поки кількість х не буде рівна кількості сіл приймаємо строку
        cin>>villname;
        
        if (villname =="X") { //якщо строка х збільшуємо кількість х
            x++;
        }
        else{ //якщо не х
            vills[x].neighbors.push_back(villsmap[villname]); //в село під індексом х в вектор сусідів додаємо індекс села який отримуємо з мапи
        }
    }
    cin>>startVill;
    for (int i = 0; i < searchvillnum; i++) { //приймає назви шуканих сіл
        cin >> villname;
        endVills[i] = villsmap[villname]; 
        
    }


    pair<int, int> a(villsmap[startVill],0);//Пара - індекс початкового села і його дистанція від початку(0)
    Queue.push(a);//Додаєм пару в чергу
    vills[villsmap[startVill]].used = true;//Змінюємо початкове село на пройдене
    
    int countmax = 0;// Максимальна дистанція із накоротших дистнацій до шуканих сіл
    int finded = 0;// Кількість знайдених сіл

    while (!Queue.empty())// Поки черга не пуста
    {
        int i = Queue.front().first;//Дістаємо з черги пару, а з пари індекс
        int d = Queue.front().second;//Дістаємо з черги пару, а з пари дистанцію
        Queue.pop();//Видаляємо останній елемент з черги
        for (int k = 0; k < vills[i].neighbors.size(); k++){
            if(vills[vills[i].neighbors[k]].used) {
                continue;
            }
            
             for (int j = 0; j < searchvillnum; j++)
             {
                 if (vills[i].neighbors[k]==endVills[j]) {
                     finded++;
                     if (countmax<d+1) {
                         countmax = d+1;
                     }
                 }
             }
            
            vills[vills[i].neighbors[k]].used=true;
            pair<int, int> a(vills[i].neighbors[k],d+1);
            Queue.push(a);
        }
            if (finded==searchvillnum) {
                break;
            }
            
        
        
    }
    cout<<countmax;
    return 0;
}