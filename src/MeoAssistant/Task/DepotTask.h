#pragma once
#include "InterfaceTask.h"

namespace asst
{
    class DepotTask final : public InterfaceTask
    {
    public:
        inline static constexpr std::string_view TaskType = "Depot";

        DepotTask(const AsstCallback& callback, void* callback_arg);
        virtual ~DepotTask() override = default;
    };
}
