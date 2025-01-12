# Setup

Taken from `https://libcxx.llvm.org/Modules.html`
```
git clone https://github.com/llvm/llvm-project.git
cd llvm-project
mkdir build
cmake -G Ninja -S runtimes -B build -DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind"
ninja -C build
```

# cpp-modules

Test Repo to test the state of the cpp-modules feature.

Current state with clang 19:

- [x] Simple cases
- [x] Std lib as module
