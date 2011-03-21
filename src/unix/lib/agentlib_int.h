/*
 * vim: tabstop=4 shiftwidth=4 softtabstop=4
 *
 * Copyright (c) 2011 Openstack, LLC.
 * All Rights Reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *    License for the specific language governing permissions and limitations
 *    under the License.
 */

#ifndef __AGENTLIB_INT_H__
#define __AGENTLIB_INT_H__

#define AGENTLIB_PUBLIC_API __attribute__ ((visibility("default")))

#include "agentlib.h"
#include "plugin_int.h"

int agentlib_init(void);
void agentlib_deinit(void);
int agentlib_run_threads(void);
int agentlib_stop_threads(void);

#endif /* __NOVA_AGENT_PLUGIN_H__ */
