/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2025-04-12 21:09:10
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2025-04-12 21:51:39
 * @FilePath: /version_management/src/main.cpp
 * @Description:
 *
 * Copyright (c) 2025 by ${git_name_email}, All Rights Reserved.
 */
#include "version.h"
#include <iostream>

int main() {
  std::cout << "git_hash : " << version::git_hash << "\n";
  std::cout << "git_tag : " << version::git_tag << "\n";
  std::cout << "git_branch : " << version::git_branch << "\n";
  std::cout << "git_commit_time : " << version::git_commit_time << "\n";
  std::cout << "build_time : " << version::build_time << "\n";
  return 0;
}
