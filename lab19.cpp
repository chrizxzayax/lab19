// comsc 210 | lab17 | Christian Molina
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct ReviewNode
{
    double rating;
    string comment;

    ReviewNode* next;
    ReviewNode(double r, const string& c) : rating(r), comment(c), next(nullptr) {}

};

class MovieReviews {
    private:
        ReviewNode* head;
        string title;    
            
    public:

    MovieReviews(const string& t) : title(t), head(nullptr) {}

    void addHead(double rating, const string& comment) {
        ReviewNode* newNode = new ReviewNode(rating, comment);
        newNode->next = head;
        head = newNode;
    }


};

vector<string> readComments(const string& filename) {
    vector<string> comments;
    ifstream fin(filename);
    if (!fin) {
        cerr << "Error opening file: " << filename << endl;
        return comments;
    }
    string line;
    while (getline(fin, line)) {
        if(!line.empty())
        {
            comments.push_back(line);
        }
    }
    return comments;
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // seed for random number generation
    vector<string> allCom = readComments("comments.txt");

}