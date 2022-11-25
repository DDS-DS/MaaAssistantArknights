#pragma once
#include "InterfaceTask.h"

namespace asst
{
    class ProcessTask;
    class AutoRecruitTask;

    class RecruitTask final : public InterfaceTask
    {
    public:
        inline static constexpr std::string_view TaskType = "Recruit";

        RecruitTask(const AsstCallback& callback, void* callback_arg);
        virtual ~RecruitTask() override = default;

        virtual bool set_params(const json::value& params) override;

    private:
        std::shared_ptr<AutoRecruitTask> m_auto_recruit_task_ptr = nullptr;
    };
}
