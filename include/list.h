//
// Created by ayden on 2017/5/12.
//

#ifndef CARDS_LIST_H
#define CARDS_LIST_H

typedef struct cardNode {
    int number;
    int count;
    struct cardNode *next;
} cardNode;

typedef struct categoryNode {
    int count;
    cardNode *card;
    struct categoryNode *complement;
} categoryNode;

cardNode * cardNodeBuild();
categoryNode * categoryNodeBuild();

cardNode * getCardNode(categoryNode *catNode, int number);
int putCardNode(categoryNode *catNode, cardNode *carNode);

#endif //CARDS_LIST_H
