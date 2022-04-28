#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<string>vect;

class HRML{
  public:
    map<string,string> attribute;
    string tag;
    HRML *next;
    HRML *prev;
    HRML *parent = NULL;
  
  string getValueByAttribute(string attribute){
    map<string,string>::iterator it;
    it = this->attribute.find(attribute);
    if(it != this->attribute.end()){
      return it->second;
    }
    else{
      return "Not Found!";
    }
  }
};

HRML* tail = NULL;

void append(HRML** head_ref, HRML* new_node){
  HRML *last = *head_ref;
  new_node->next = NULL;
  if (*head_ref == NULL){
    *head_ref = new_node;
    tail = new_node;
    tail->prev = NULL;
    return;
  }
  else{
    last = tail;
    last->next = new_node;
    tail = last->next;
    tail->prev = last;
  }
  return;
}

void printList(HRML *node)
{
  while (node != NULL)
  {
    cout<<"Tag: " << node->tag << ' ';
    if(node->parent != NULL){
      cout  << "Parent " << node->parent->tag;
    }
    cout << '\n';
    node = node->next;
  }
}

int main()
{
  /* Start with the empty list */
  HRML* head = NULL;
  // Insert 6. So linked list becomes 6->NULL
  int N,Q;
  cin >> N >> Q;
  cin.ignore();
  while(N--){
    HRML *new_node = new HRML();
    string hrml;
    getline(cin,hrml);
    if(hrml[1] == '/'){
      HRML *tmp = new HRML();
      HRML *cur = new HRML();
      int end = hrml.find('>');
      string tag = hrml.substr(2,end-2);
      cur = tail;
      while(cur->tag != tag){
        cur = cur->prev;
      }
      if(cur != head){
        tmp = tail->prev;
        while(tmp->parent != NULL || tag == tmp->tag){
          tmp = tmp->prev;
        }
        cur->parent = tmp;
      }
    }
    else{
      int pos = 1;
      int isAttr = hrml.find(' ');
      string tag = "";
      int start = isAttr+1;
      if(isAttr > 0){      
        while(true){
          tag = hrml.substr(pos,isAttr - pos);
          int end = hrml.find(' ',start);
          // cout << start << ' ' << end;
          string attr = hrml.substr(start,end-start); //get attribute
          // cout << start << ' ' << end << '\n';
          int valStart = hrml.find('"',end+1) + 1;
          int valEnd = hrml.find('"',valStart);
          string val = hrml.substr(valStart,valEnd-valStart);
          // cout << valStart << ' ' << valEnd << '\n';
          // cout << attr << ' ' << val << '\n';
          new_node->attribute.insert(pair<string,string>(attr,val));
          if(hrml[valEnd+1] == ' '){
            start = valEnd+2;
          }
          else{
            break;
          }
        }
      }
      else{
        int end = hrml.find(">");
        tag = hrml.substr(pos,end-pos);
      }
      new_node->tag = tag;
      append(&head,new_node); 
    }
  }
  // printList(head);
  
  while(Q--){
    HRML *iter = new HRML();
    iter = head;
    string query;
    cin >> query;
    int startTag = 0;
    int endTag = query.find('.');
    bool force = false;
    while(endTag > 0){
      string tag = query.substr(startTag,endTag-startTag);
      vect.push_back(tag);
      startTag = endTag+1;
      endTag = query.find('.',startTag);
    }
    if(!force){
      endTag = query.find('~');
      if(endTag > 0){
        string tag = query.substr(startTag,endTag-startTag);
        string attr = query.substr(endTag+1,query.length()-endTag);
        bool valid = true;
        vect.push_back(tag);
        reverse(vect.begin(),vect.end());
        if(vect.size() == 1){
          if(iter->tag == vect[0]){
            cout << iter->getValueByAttribute(attr) << '\n';
          }
          else{
            cout << "Not Found!" << '\n';
          }
        }
        else{
          while(iter->tag != vect[0] && iter->next != NULL){
            iter=iter->next;
          }
          if(iter->tag != vect[0]){
            cout << "Not Found!" << '\n';
          }
          else{
            string val = iter->getValueByAttribute(attr);
            for(int i = 1; i < vect.size(); i++){
              if(iter->parent->tag == vect[i]){
                iter=iter->parent;
              }
              else{
                valid = false;
                break;
              }
            }
            if(valid){
              cout << val << '\n';
            }
            else{
              cout << "Not Found!" << '\n';
            }
          }
        }
      }
      else{
        cout << "Not Found!" << '\n';
      }
    }
    vect.clear();
  }
  return 0;
}