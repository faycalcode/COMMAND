#include <iostream>

#define BUTTON_A true
#define BUTTON_B true
#define BUTTON_C true
#define BUTTON_D true

class Command{
    public:
    Command() = default;
    virtual void execute() const = 0;
    ~Command() = default;
};

class Jump : public Command{
    public:
    void execute() const override {
        std::cout << "Jumping" << '\n';
    }
};

class Fire : public Command{
    public:
    void execute() const override {
        std::cout << "Fire" << '\n';
    }
};

class Kick : public Command{
    public:
    void execute() const override {
        std::cout << "Kick" << '\n';
    }
};

class Drink : public Command{
    public:
    void execute() const override {
        std::cout << "Drink" << "\n";
    }
};

class InputHandler {
    Command* btn_A;
    Command* btn_B;
    Command* btn_C;
    Command* btn_D;

    public:
    InputHandler() : 
        btn_A(new Fire()), btn_B(new Jump()), btn_C(new Kick()), btn_D(new Drink()) {} 
    void Handle() const {
        if(BUTTON_A) btn_A->execute();
        if(BUTTON_B) btn_B->execute();
        if(BUTTON_C) btn_C->execute();
        if(BUTTON_D) btn_D->execute();
    }
    ~InputHandler() {
        delete btn_A;
        delete btn_B;
        delete btn_C;
        delete btn_D;
    }
};

int main(){

    InputHandler ih;
    ih.Handle();

    return 0;
}