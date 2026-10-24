#pragma once
#include <string>
#include <vector>
#include <iosfwd>
#include "tasks/Task.hpp"
#include "problems/Problem.hpp"

class Computer{
private:
    std::string name{"Computer"};
    Task create_task(const Problem& problem);
public:
    Computer() = default;
    explicit Computer(std::string comp_name);

    const std::string& get_name() const noexcept {return name;};

    std::vector<Task> create_tasks(const std::vector<Problem>& problems);

    friend std::ostream& operator<<(std::ostream& out, const Computer& computer);
};