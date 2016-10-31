#include <iostream>

using namespace std;
#include <iostream>
using namespace std;

class GradedActivity {
	int grammar;
	int spelling;
	int correctLength;
	int content;

	public:
	GradedActivity(int grammar, int spelling, int correctLength, int content)
		{
			this -> grammar = grammar;
			this -> spelling = spelling;
			this -> correctLength = correctLength;
			this -> content = content;
		}
		
		void setGrammar(int grammar) {
			this -> grammar = grammar;
		}
		void setSpelling(int spelling) {
			this -> spelling = spelling;
		}
		
		void setCorrectLength(int correctLength) {
			this -> correctLength = correctLength;
		}
		
		void setContent(int content) {
			this -> content = content;
		}
		
		int getGrammar() {
			return grammar;
		}
		
		int getSpelling() {
			return spelling;
		}
		
		int getCorrectLength() {
			return correctLength;
		}
		
		int getContent() {
			return content;
		}
};

class Essay : public GradedActivity {
	private:	
		int totalPoints;
	
	public:
		Essay(int totalPoints) {
			this -> totalPoints = totalPoints;
		}
		
		void setTotalPoints(int totalPoints) {
			this -> totalPoints = totalPoints;
		}
		
		int getTotalPoints() {
			return totalPoints;
		}
};

int main(){
	Essay Score(100);
	
    Score.setGrammar(30);
    cout << "Grammar: " << Score.getGrammar() << endl;
    
    Score.setSpelling(20);
    cout << "Spelling: " << Score.getSpelling() << endl
    
    Score.setCorrectLength(20);
    cout << "Length: " << Score.getCorrectLength() << endl;
	
	Score.setContent(30);
	cout << "Content: " << Score.getContent() << endl;
	
    cout << "Total Score : "<< Score.getTotalPoints();
	
	return 0;
}
