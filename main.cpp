/*
 * Copyright (c) 2017-2018, CATIE
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); 
 * you may not use this file except in compliance with the License. 
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * See the License for the specific language governing permissions and 
 * limitations under the License.
 */
#include "mbed.h"
#include "swo.h"

namespace {
#define PERIOD_MS 1000
}

using namespace sixtron;
static DigitalOut led1(LED1);
static SWO swo;

// main() runs in its own thread in the OS
// (note the calls to Thread::wait below for delays)
int main()
{
	swo.printf("Hello World!\n");
    while (true) {
        led1 = !led1;
        wait_ms(PERIOD_MS / 2);
    }
}
