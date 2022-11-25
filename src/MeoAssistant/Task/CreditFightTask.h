#pragma once

#include "PackageTask.h"

#include <memory>

namespace asst
{
    class CreditFightTask final : public PackageTask
    {
    public:
        inline static constexpr std::string_view TaskType = "CreditFight";

        CreditFightTask(const AsstCallback& callback, void* callback_arg, std::string_view task_chain);
        virtual ~CreditFightTask() override = default;
    };
} // namespace asst
