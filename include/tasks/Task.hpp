#pragma once
#include <string>
#include <iosfwd>
#include <vector>

enum class TaskStatus{
    COMPLETED, INPROGRESS, PENDING
};

class Task{
private:
    std::string name{"Task"};
    unsigned int priority{};
    TaskStatus status{TaskStatus::PENDING};
    
    void mark_completed() noexcept;
public:
    Task() = default;
    Task(const std::string& name, unsigned int priority);

    const std::string& get_name() const noexcept  { return name; };
    unsigned int get_priority() const noexcept       { return priority; };
    TaskStatus get_status() const noexcept  { return status; };

    void check_status();
    bool is_completed() const noexcept;

    friend std::ostream& operator<<(std::ostream& out, const Task& task);
};