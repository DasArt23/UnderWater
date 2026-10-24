#pragma once
#include <string>
#include <iosfwd>

class Problem {
private:
    unsigned int id;
    int severity;
    std::string context;

protected:
    virtual void print(std::ostream& out) const;

public:
    Problem(unsigned int id, int severity);
    virtual ~Problem() = default;

    unsigned int get_id() const noexcept { return id; }
    int get_severity() const noexcept { return severity; }

    friend std::ostream& operator<<(std::ostream& out, const Problem& problem);
};