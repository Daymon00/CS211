#include <iostream>
#include <vector>
using namespace std;

void vectorprint(vector<int> vi)
{
  for (vector<int>::iterator i=vi.begin(); i!=vi.end(); i++)
    cout << *i << " ";
  cout << endl;
}

class node {
public:
  int a;
  int d;       // ax^d
  node *next;
  node(int i, int j, node* p) {
    a = i;
    d = j;
    next = p;
  }
};

class polynomial {
public:
  node *head;
  node* createlist(vector<int> vi);
  void print();
  void printpolynomial();
  friend polynomial operator +(polynomial& p1, polynomial& p2);

  polynomial() {
  }
  
  polynomial(string s) {
    // s = 3x^5 - 7x^3 + 2x^1 - 8
    vector<int> vi;
    char flag = '+';
    string temp = "";
    for (int i=0; i<s.size(); i++) {
      //cout << i << " ";
      if (isdigit(s[i])) 
	temp += s[i];
      else if (s[i] == 'x') {
	if (flag == '-') {
	  vi.push_back(-stoi(temp));
	}
	else {
	  vi.push_back(stoi(temp));
	}
	temp = "";
      }
      else if (s[i] == ' ') {
	if (temp != "") {
	  vi.push_back(stoi(temp));
	  temp = "";
	}
      }
      else if (s[i] == '-')
	flag = '-';
      else if (s[i] == '+')
	flag = '+';
      else
	;
    }
    if (temp != "") {
      if (flag == '-') {
	vi.push_back(-stoi(temp));
      }
      else {
	vi.push_back(stoi(temp));
      }
      temp = "";
    }
      
    //vectorprint(vi);

    head = createlist(vi);
  }
};

node* polynomial::createlist(vector<int> vi)
{
  if ( (vi.size()%2) == 1)
    vi.push_back(0);


  node* first = new node(vi[0], vi[1], nullptr);
  node* previous = first;
  for (int i=2; i<vi.size(); i=i+2) {
    previous->next = new node(vi[i], vi[i+1], nullptr);
    previous = previous->next;
  }

  return(first);

}

void polynomial::print()
{
  node* move = head;
  while (move != nullptr) {
    cout << "(" << move->a << "," << move->d << ") ";
    move = move->next;
  }
  cout << endl;
}

void polynomial::printpolynomial()
{
  node* move = head;
  while (move != nullptr) {
    if (move->a != 0) {
      if (move->a > 0) {
	if (move != head)
	  cout << "+ ";
	cout << move->a;
      }
      else if (move->a < 0)
	cout << "- " << -(move->a);
      else
	;
      if (move->d != 0)
	cout << "x^" << move->d << " ";
    }
    move = move->next;
  }
  cout << endl;
}


polynomial operator +(polynomial& p1, polynomial& p2)
{
  vector<int> vi;

  node* move1=p1.head;
  node* move2=p2.head;
  while (move1 != nullptr && move2 != nullptr) {
    if (move1->d > move2->d) {
      vi.push_back(move1->a);
      vi.push_back(move1->d);
      move1 = move1->next;
    }
    else if (move1->d < move2->d) {
      vi.push_back(move2->a);
      vi.push_back(move2->d);
      move2 = move2->next;
    }
    else {
      vi.push_back(move1->a + move2->a);
      vi.push_back(move1->d);
      move1 = move1->next;
      move2 = move2->next;
    }
  }
  //vectorprint(vi);

  polynomial p3;
  p3.head = p3.createlist(vi);
  return p3;
}

int main()
{
  string s = "3x^5 - 7x^3 + 2x^1 - 8";
  cout << s << endl;
  polynomial p1(s);
  //p1.print();

  string s2 = "-5x^3 + 7x^2 - 10";
  cout << s2 << endl;
  polynomial p2(s2);
  //p2.print();

  polynomial p3 = p1 + p2;
  //p3.print();
  p3.printpolynomial();
  
  //cout << "end" << endl;
  return(0);
}