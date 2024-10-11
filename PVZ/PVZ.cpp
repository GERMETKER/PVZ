#include <iostream>
#include <Windows.h>
class Plants
{
public:
    Plants()
    {
        size_ = 0;
    }
    Plants(int size, std::string name)
    {
        size_ = size;
        name_ = name;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = "Medium";
        }
    }
    void SetSize(int size)
    {
        size_ = size;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = "Medium";
        }
    }
    void SetName(std::string name)
    {
        name_ = name;
    }
    int GetSize()const
    {
        return size_;
    }
    std::string GetName()const
    {
        return name_;
    }


protected:
    std::string razmer;
    int size_;
    std::string name_;
private:
};
//size = 0 это золотая середина. Меньше - меньше, больше - больше.


class Tree : public Plants
{
public:
    Tree()
    {
        size_ = 50;
        razmer = "Big";
    }
    Tree(int size, std::string name)
    {
        name_ = name;
        size_ = size;
        if (size_ > 0)
        {
            razmer = "Big";
        }
        else
        {
            size_ = 50;
            razmer = "Big";
        }
    }
    Harvest* Take()
    {
        sizeHarv -= 1;
       
        Harvest* SMango = new Harvest(500, "mango");
        return SMango;
    }


private:
    int sizeHarv = 15;
};

class Bush : public Plants
{
public:
    Bush()
    {
        size_ = -50;
        razmer = "Little";
    }
    Bush(int size, std::string name)
    {
        name_ = name;
        size_ = size;
        if (size < 0)
        {
            razmer = "Little";
        }
        else
        {
            razmer = -50;
            razmer = "Little";
        }
    }

private:
};

class Harvest
{
public:
    Harvest() = default;
    Harvest()
    {}
    Harvest(float weight, std::string name)
    {
        weight_ = weight;
        name_ = name;
    }
    

protected:
    std::string name_;
    float weight_;
private:
};

class Fruit : public Harvest
{
public:
    Fruit()
    {}
    Fruit(float weight, std::string name) :Harvest(weight, name){}
    void SetWeight(int weight)
    {
        weight_ = weight;
    }
    void SetName(std::string name)
    {
        name_ = name;
    }
    int GetWeight()const
    {
        return weight_;
    }
    std::string GetName()const
    {
        return name_;
    }


protected:


private:
};

class Berry : public Harvest
{
public:
    Berry()
    {}
    Berry(float weight, std::string name) :Harvest(weight, name) {}


protected:


private:
};

class Cone : public Harvest
{
public:



protected:


private:
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Bush president;
    Tree dub( 75, "Dub");
    Harvest banan;
    
}


