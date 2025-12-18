class HistoryNode {
public:
    string data;
    HistoryNode* next;
    HistoryNode* prev;

    HistoryNode(string x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class BrowserHistory {
public:
    HistoryNode* current;

    BrowserHistory(string homepage) {
        current = new HistoryNode(homepage);
    }

    void visit(string url) {
        current->next = NULL;   // clear forward history
        HistoryNode* nn = new HistoryNode(url);
        current->next = nn;
        nn->prev = current;
        current = nn;
    }

    string back(int steps) {
        while (steps && current->prev) {
            current = current->prev;
            steps--;
        }
        return current->data;
    }

    string forward(int steps) {
        while (steps && current->next) {
            current = current->next;
            steps--;
        }
        return current->data;
    }
};


/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */