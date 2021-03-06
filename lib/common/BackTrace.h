#pragma once

#include "stacktrace.h"

// 输出调用堆栈, 如同用 gdb 的 bt(backtrace) 命令一般
// 注意, 需要打开编译选项 -rdynamic, 否则可能看不到正确的堆栈, 对于 static 函数, 也看不到其堆栈, 内联的函数也没有堆栈

// 打印到标准输出
void BackTrace(const char* some_content_prefix);
