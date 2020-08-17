/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef EXEC_ADMIN_LISTROLESEXECUTOR_H_
#define EXEC_ADMIN_LISTROLESEXECUTOR_H_

#include "exec/Executor.h"

namespace nebula {
namespace graph {

class ListRolesExecutor final : public Executor {
public:
    ListRolesExecutor(const PlanNode *node, QueryContext *ectx)
        : Executor("ListRolesExecutor", node, ectx) {}

    folly::Future<Status> execute() override;

private:
    folly::Future<Status> listRoles();
};

}   // namespace graph
}   // namespace nebula

#endif  // EXEC_ADMIN_LISTROLESEXECUTOR_H_
