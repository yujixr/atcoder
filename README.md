# AtCoder

For competitive programming contests...

## How to run

Press F5 key to compile, run, and debug. 
Standard input is redirected to `input.txt`.

## Development environment

### Visual Studio Code

1. Install [VS Code](https://code.visualstudio.com/), [Docker](https://www.docker.com/)
2. Add [`ms-vscode-remote.remote-containers`](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) extension
3. Pull [this repository](https://github.com/yujixr/atcoder.git)
4. Click `Reopen in Container`
5. Just wait a minute

### GNU Make

Just run `make`, and run the generated binary.
if you want to clean up, run `make clean`.

## Template

``` c++
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;

int main()
{
  cout << "hello,world" << endl;
}
```
