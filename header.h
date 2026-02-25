#ifndef HEADER_H 
#define HEADER_H

class Ivisitor;
class IElement{  
public:
    virtual void accept(Ivisitor* v)=0;
    virtual ~IElement() = default ;
};

class concrete_element_one:public IElement{
    void accept(Ivisitor* v) override;
};

class concrete_element_two:public IElement{
    void accept(Ivisitor* v) override;
};

class concrete_element_three:public IElement{
    void accept(Ivisitor* v) override;
};

class concrete_element_four:public IElement{
    void accept(Ivisitor* v) override ;
};

class Ivisitor 
{  public:
    virtual void visit(concrete_element_one*) = 0 ;
    virtual void visit(concrete_element_two*) = 0 ;
    virtual void visit(concrete_element_three*) = 0 ;
    virtual void visit(concrete_element_four*) = 0 ;
    virtual ~Ivisitor() = default ;
};

class concrete_visitor_one : public Ivisitor{
public:
    void visit(concrete_element_one*) override;
    void visit(concrete_element_two*) override;
    void visit(concrete_element_three*) override;
    void visit(concrete_element_four*) override;
};

class concrete_visitor_two : public Ivisitor{
public:
    void visit(concrete_element_one*) override;
    void visit(concrete_element_two*) override;
    void visit(concrete_element_three*) override;
    void visit(concrete_element_four*) override;
};

class concrete_visitor_three : public Ivisitor{
public:
    void visit(concrete_element_one*) override;
    void visit(concrete_element_two*) override;
    void visit(concrete_element_three*) override;
    void visit(concrete_element_four*) override;
};

class concrete_visitor_four : public Ivisitor{
public:
    void visit(concrete_element_one*) override;
    void visit(concrete_element_two*) override;
    void visit(concrete_element_three*) override;
    void visit(concrete_element_four*) override;
};
#endif 