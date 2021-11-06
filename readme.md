Raspberry Pi ZeroなどのRemote-SSHが使えないARM Linuxを対象としたVisual Studio Codeを使った開発環境\
arm-linux-gnueabihf-g++を使いホスト側でビルド、rsyncでファイルの共有、sshでgdbserverを起動、gdb-multiarchでリモートと接続を行います。\
デバッガはtarget remoteで接続されます。\
2021年11月6日現在、printf単体ではデバッグ終了時にまとめて出力されることを確認しています。そのため、fflush(stdout);を明示する必要があります。