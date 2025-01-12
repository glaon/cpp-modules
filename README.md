# Setup

Taken from `https://libcxx.llvm.org/Modules.html`

Do 
```
git clone https://github.com/llvm/llvm-project.git
cd llvm-project
mkdir build
cmake -G Ninja -S runtimes -B build -DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind"
ninja -C build
```
in the root of the repo.

# cpp-modules

Test Repo to test the state of the cpp-modules feature.

Current state with clang 19:

- [x] Simple cases
- [x] Std lib as module
