# AtCoder

コンテスト用のプログラムを書いてくリポジトリ

## 実行方法

F5キーでコンパイル&実行&デバッグが自動で動く。
標準入力は "input.txt"にリダイレクトしているので実行サンプルをコピペしたらOK。

## 環境構築

WSL(Windows Subsystem for Linux)上のUbuntu 18.04 LTSを使う。
Ubuntuに構築した環境をWindowsからリモートで利用。

### インストールするもの

Windows

#### Visual Studio Code

<https://code.visualstudio.com>から入手。以下の拡張機能をインストール。

- C/C++
- Remote - WSL

#### Windows Subsystem for Linux

まだ入れていない場合は、PowerShell(管理者権限)で以下のコマンドを実行。

```Enable-WindowsOptionalFeature -Online -FeatureName Microsoft-Windows-Subsystem-Linux```

#### Ubuntu

Microsoft Storeから、Ubuntu 18.04 LTSをインストールし、コンソール上のダイアログに従ってセットアップする。

セットアップが完了したら、以下のコマンドを順に実行。

```shell
sudo sed -i -e 's%http://.*.ubuntu.com%http://ftp.jaist.ac.jp/pub/Linux%g' /etc/apt/sources.list

sudo apt update

sudo apt upgrade

sudo apt install -y build-essential gdb
```

#### VSCode Workspace

<https://github.com/yujixr/AtCoder>のmaster branchをそのままcloneし、VS Codeでフォルダごと開き、左下にある緑色のボタン(Open a remote window)を押す。
少しして準備が完了したら、新しいウィンドウが開き、Ubuntuのコンソールが見えているはず。

これで準備完了。
