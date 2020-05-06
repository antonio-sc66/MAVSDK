// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/param/param.proto)

#include <iomanip>

#include "param_impl.h"
#include "plugins/param/param.h"

namespace mavsdk {

Param::Param(System& system) : PluginBase(), _impl{new ParamImpl(system)} {}

Param::~Param() {}

std::pair<Param::Result, int32_t> Param::get_param_int(std::string name) const
{
    return _impl->get_param_int(name);
}

Param::Result Param::set_param_int(std::string name, int32_t value) const
{
    return _impl->set_param_int(name, value);
}

std::pair<Param::Result, float> Param::get_param_float(std::string name) const
{
    return _impl->get_param_float(name);
}

Param::Result Param::set_param_float(std::string name, float value) const
{
    return _impl->set_param_float(name, value);
}

const char* Param::result_str(Param::Result result)
{
    switch (result) {
        case Param::Result::Unknown:
            return "Unknown result";
        case Param::Result::Success:
            return "Request succeeded";
        case Param::Result::Timeout:
            return "Request timed out";
        case Param::Result::ConnectionError:
            return "Connection error";
        case Param::Result::WrongType:
            return "Wrong type";
        case Param::Result::ParamNameTooLong:
            return "Parameter name too long (> 16)";
        default:
            return "Unknown";
    }
}

std::ostream& operator<<(std::ostream& str, Param::Result const& result)
{
    switch (result) {
        case Param::Result::Unknown:
            return str << "Result Unknown";
        case Param::Result::Success:
            return str << "Result Success";
        case Param::Result::Timeout:
            return str << "Result Timeout";
        case Param::Result::ConnectionError:
            return str << "Result Connection Error";
        case Param::Result::WrongType:
            return str << "Result Wrong Type";
        case Param::Result::ParamNameTooLong:
            return str << "Result Param Name Too Long";
        default:
            return str << "Unknown";
    }
}

} // namespace mavsdk