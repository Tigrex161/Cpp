
#include <iostream>
#include <string>

using namespace std;

struct doc
{
	string docname = "general";
	int idnum;
	int tpages = 0;
	int prec = 5;

	doc* next;


	doc()
	{
		next = nullptr;

	}

	doc(string one, int i, int j, int k)
	{
		docname = one;
		idnum = i;
		tpages = j;
		prec = k;
		next = nullptr;

	}

};

struct user
{
	doc *top;
	doc *back;
	user *nextUser;
	int uID;
	int noofdocs = 0;
	string name = "Default User";
	user(int a, string name)
	{
		top = nullptr;
		back = nullptr;
		nextUser = nullptr;
		uID = a;
		name = name;
	}
	user(const user &a)
	{
		top = back = nullptr;
		nextUser = nullptr;
		this->name = a.name;
		this->uID = a.uID;
		doc *tmp = a.top;
		while (tmp != nullptr)
		{
			enqueuedoc(tmp->docname, tmp->prec, tmp->idnum, tmp->tpages);
			tmp = tmp->next;
		}
	}

	void enqueuedoc(string one, int p, int i, int g)
	{
		noofdocs++;
		if (top == nullptr)
		{
			doc*z = new doc();
			z->docname = one;
			z->idnum = i;
			z->tpages = g;
			z->prec = p;
			z->next = nullptr;
			top = z;
			back = z;
			return;
		}
		if (p < 1)
		{
			p = 1;
		}
		if (p>5)
		{
			p = 5;
		}
		if (p == 5)
		{
			doc*t = top;
			while (t->next != nullptr)
			{
				t = t->next;
			}
			doc*z = new doc();
			z->docname = one;
			z->prec = p;
			z->tpages = g;
			z->idnum = i;
			z->next = nullptr;
			t->next = z;
			back = z;
			return;
		}

		if (top == nullptr)
		{
			doc*z = new doc();
			z->docname = one;
			z->prec = p;
			z->tpages = g;
			z->idnum = i;
			z->next = nullptr;
			top = z;
			back = z;
			return;
		}
		else
		{
			doc*z = new doc();
			z->docname = one;
			z->prec = p;
			z->tpages = g;
			z->idnum = i;
			z->next = nullptr;
			if (p <= top->prec)
			{
				z->next = top;
				top = z;
				return;
			}
			doc *tmpOE = top;
			doc *tmpprev = nullptr;
			while (tmpOE->next != nullptr)
			{
				if (p <= tmpOE->prec)
				{

					z->next = tmpOE;
					tmpprev->next = z;
					return;
				}
				else
				{
					tmpprev = tmpOE;
					tmpOE = tmpOE->next;
					continue;
				}
			}
			tmpOE->next = z;
			back = z;
			return;
		}

	}





	void dQ()
	{
		if (top == nullptr)
		{
			cout << "Mr. " << this->name << " uID : " << this->uID << " has no pending docs to be printed.\n";
			return;
		}
		else{
			doc* tmprecQ = top;
			top = top->next;
			tmprecQ->~doc();
			noofdocs--;
			return;
		}
	}

	void dispUserBuffer()
	{
		if (this->top == nullptr)
			cout << endl << "Mr. " << this->name << " (User idnum: " << this->uID << ") has no pending documents to be printed.\n";
		else
		{
			cout << endl << "Mr. " << this->name << " (User idnum: " << this->uID << ") has the following documents queued to be printed:\n";
			doc *tmp9 = this->top;
			while (tmp9 != nullptr)
			{
				cout << tmp9->docname << endl;
				tmp9 = tmp9->next;
			}
		}
	}

	bool buffEmpty()
	{
		if (noofdocs == 0)
			return 1;
		return 0;
	}

	string returnFront()
	{
		cout << endl;
		return top->docname;
	}



	~user()
	{
		while (top != nullptr)
		{
			dQ();
		}
		back = nullptr;
		top = nullptr;
	}
};

struct spool
{
	user *pfront;
	user *prear;

	int printerID;
	int numusers=0;
	spool(int a)
	{
		pfront = nullptr;
		prear = nullptr;
		printerID = a;
	}

	void printrNQ(user a)
	{


		if (a.top == nullptr)
		{
			cout << "This user doesn't have any doc's.\n";

			return;
		}

		if (numusers == 0)
		{

			user *tmp_user = new user(a);

			pfront = prear = tmp_user;
			numusers++;


			return;
		}


		user *tmp = pfront;
		while (tmp != nullptr)
		{
			if (tmp->uID == a.uID)
			{

				doc*tmp2 = a.top;

				while (tmp2 != nullptr)
				{
					tmp->enqueuedoc(tmp2->docname, tmp2->prec, tmp2->idnum, tmp2->tpages);
					tmp2 = tmp2->next;

				}

				return;
			}
			else
			{
				tmp = tmp->nextUser;
				continue;
			}
		}

		user *z = new user(a);
		user *tmp3 = pfront;
		while (tmp3->nextUser != nullptr)
		{
			tmp3 = tmp3->nextUser;
		}
		tmp3->nextUser = z;
		prear = z;
		numusers++;


		return;
	}




	void printDQ()
	{


		if (pfront == nullptr)
		{
			cout << "spool is Empty.\n";
			return;
		}
		else
		{
			user*tmp = pfront;
			if (!tmp->buffEmpty())
			{
				if (numusers > 1)
				{
					tmp = pfront;
					pfront = pfront->nextUser;
					numusers--;
					delete tmp;
				}
				else
				{
					pfront = prear = nullptr;
					cout << "The spool has been emptied.\n";
					numusers = 0;
				}

			}
		}
	}

	~spool()
	{
		while (pfront != nullptr)
		{
			printDQ();
		}
		pfront = nullptr;
	}



	int noUsers()
	{
		return numusers;
	}

	void docStat(user a)
	{
		if (pfront->uID == a.uID)
		{
			cout << "Doc's of: " << a.name << " User idnum: " << a.uID << " are being printed." << endl;
		}
		else{
			user *statustmp = pfront->nextUser;
			while (statustmp->nextUser != nullptr)
			{
				if (statustmp->uID == a.uID)
				{
					cout << "Doc's of: " << a.name << " User idnum: " << a.uID << " are already queued for printing."<<endl;
					return;
				}
			}
			if (statustmp->uID == a.uID)
				cout << "Doc's of: " << a.name << " User idnum: " << a.uID << " are already queued for printing."<<endl;
			else cout << "Doc's of: " << a.name << " User idnum: " << a.uID << " are not queued." << endl ;

		}
	}



	void dispSpool()
	{
		if (numusers == 0)
		{
			cout << "spool is Empty.\n";
		}
		else
		{
			user *tmp = pfront;
			while (tmp != nullptr)
			{
				tmp->dispUserBuffer();
				tmp = tmp->nextUser;
			}

		}
	}


};


spool loader(spool &a, spool &b, spool&c)
{
	if (a.noUsers() <= b.noUsers())
	{
		if (a.noUsers() <= c.noUsers())
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else{
		if (b.noUsers() <= c.noUsers())
		{
			return b;
		}
		else{
			return c;
		}
	}
}

void prntDoc(user caller, spool a, spool b, spool c)
{
	loader(a, b, c).printrNQ(caller);

}

int main()
{return 0;}
