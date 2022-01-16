//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#ifndef STATICSTACK_H_INCLUDED
#define STATICSTACK_H_INCLUDED

const int STATIC_STACK_CAPACITY = 100;

struct StaticStack
{
    int count;
    char values[STATIC_STACK_CAPACITY];
};

StaticStack Create();

bool Push(StaticStack &stack, char elem);

char Pop(StaticStack &stack);

char Top(const StaticStack &stack);

bool IsEmpty(const StaticStack &stack);


#endif // STATICSTACK_H_INCLUDED
