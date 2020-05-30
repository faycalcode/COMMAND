# COMMAND PATTERN

## Prerequisites

* dynamic linking, virtual and pure virtual functions, pointers

## Source

* Game programming Patterns by Robert Nystrom (buy the book!)

## Usage

Define the new command

```c++
class Heal : public Command{
    public:
    void execute() const override {
        std::cout << "Drinking a potion" << '\n';
    }
};
```

Link it to your key

```c++
btn_A(new Fire());
```

Execute et voilà!

```c++
btn->execute();
```