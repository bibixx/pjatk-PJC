#include <iostream>
using namespace std;

enum Banks { PKO, BGZ, BRE, BPH };

struct Account {
  Banks bank;
  int balance;
};

struct Person {
  char name[20];
  Account account;
};

struct Couple {
  Person he;
  Person she;
};

int calculateBalance(const Couple couple) {
  return couple.he.account.balance + couple.she.account.balance;
}

void printCouple(const Couple couple) {
  cout << couple.he.name << endl;
  cout << couple.she.name << endl;
}

const Couple* bestClient(
  const Couple* couples,
  int size,
  Banks bank
) {
  const Couple* bestCouple = nullptr;
  int lastBest;

  for (size_t i = 0; i < size; i++) {
    const Couple* currentCouple = &couples[i];

    if (
      currentCouple->he.account.bank == bank
        || currentCouple->she.account.bank == bank
    ) {
      int currentBalance = calculateBalance(*currentCouple);

      if (
        bestCouple == nullptr
          || lastBest < currentBalance
      ) {
        bestCouple = currentCouple;
        lastBest = currentBalance;
      }
    }
  }

  return bestCouple;
}

int main() {
  Couple couples[] = {
    {
      { "Johny", { PKO, 1200 } },
      { "Mary", { BGZ, -1400 } },
    },
    {
      { "Peter", { BGZ, 1400 } },
      { "Suzy", { BRE, -1500 } },
    },
    {
      { "Kevin", { PKO, 1600 } },
      { "Katy", { BPH, 200 } },
    },
    {
      { "Kenny", { BPH, 200 } },
      { "Lucy", { BRE, -201 } },
    },
  };

  const Couple* p = bestClient(couples, 4, PKO);
  if (p) {
    cout << p->he.name << " and " << p->she.name << ": " << p->he.account.balance +p-> she.account.balance << endl;
  } else {
    cout << "No such couple...\n";
  }

  return 0;
}
