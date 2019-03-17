#pragma once

// 无法拷贝的类型, 目的在于阻止对象的拷贝

class NoCopy {
public:
    NoCopy() {}
    ~NoCopy() {}
    NoCopy(const NoCopy&) = delete;
    NoCopy& operator=(const NoCopy&) = delete;
};