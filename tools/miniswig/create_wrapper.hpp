#ifndef __CREATE_WRAPPER_H__
#define __CREATE_WRAPPER_H__

#include "tree.hpp"

class WrapperCreator
{
public:
    /// this is used for indentation
    const char* ind;
    // output stream
    std::ostream& out;
    std::ostream& hppout;

    WrapperCreator(std::ostream& _out = std::cout, std::ostream& _hppout = std::cout)
        : out(_out), hppout(_hppout)
    {
        ind = "  ";
    }

    void create_wrapper(Namespace* ns);
    void create_class_wrapper(Class* _class);
    void create_class_release_hook(Class* _class);
    void create_function_wrapper(Class* _class, Function* function);
    void prepare_argument(const Type& type, size_t idx, const std::string& var);
    void push_to_stack(const Type& type, const std::string& var);
};

#endif
