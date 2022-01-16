//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include "./StaticStack.h"

StaticStack Create()
{
    StaticStack stack = {0, {0}};
    return stack;
}

bool Push(StaticStack& stack, char elem)
{
    if(stack.count == STATIC_STACK_CAPACITY)
    {
        return false;
    }

    stack.values[stack.count] = elem;
    ++stack.count;

    return true;
}

char Pop(StaticStack& stack)
{
    if (IsEmpty(stack))
    {
        return '\0';
    }

    char temp = stack.values[stack.count - 1];
    stack.values[stack.count-1] = '\0';
    --stack.count;

    return temp;
}

char Top(const StaticStack& stack)
{
    if (IsEmpty(stack))
    {
        return '\0';
    }

    return stack.values[stack.count-1];
}


bool IsEmpty(const StaticStack& stack)
{
    return stack.count == 0;
}
