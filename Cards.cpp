#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Card{
private:
    string nameBook;
    string nameAuthor;
    int numberBook;
public:
    Card(){
        
    }
    Card(string nameBook,string nameAuthor,int numberBook){
        this->nameBook=nameBook;
        this->nameAuthor=nameAuthor;
        this->numberBook=numberBook;
    }
    void display(){
        cout<<"Name Book: "<<nameBook<<endl;
        cout<<"Name Author: "<<nameAuthor<<endl;
        cout <<"Number Book: "<<numberBook;
    }
    int getNumBook(){
        return numberBook;
    }
    static void sortCards(vector<Card> &cards){
        for(int i=0;i<cards.size()-1;i++){
            for(int j=i+1;j<cards.size();j++){
                if(cards[i].getNumBook()>cards[j].getNumBook()){
                    swap(cards[i],cards[j]);
                }
            }
        }
    }
};

int main(){
	vector<Card>cards;
    Card a("Quynh-a", "Quynh-a", 3);
    Card b("Quynh-b", "Quynh-b", 1);
    Card c("Quynh-c", "Quynh-c", 2);
    cards.push_back(a);
    cards.push_back(b);
    cards.push_back(c);
    Card::sortCards(cards);
    for(int i=0;i<cards.size();i++){
    	cards[i].display();
    	cout<<endl;
	}
}
