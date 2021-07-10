# ShkSchneider's Quantum Mechanical Keyboard(s)

> This need to be clones and linked into a working [qmk-firmware](https://github.com/qmk/qmk_firmware) repository.

- **xd60/rev3** [config.qmk.fm](https://config.qmk.fm/#/xd60/rev3/LAYOUT_60_ansi_split_bs_rshift) [keyboard-layout-editor](http://www.keyboard-layout-editor.com/#/gists/86fc87c6caffee86ffa3ae33e84f2f58)

  - ANSI QWERTY split-backspace
  - functions + arrows + media keys
  - mouse keys
  - special characters

- **dz60** [config.qmk.fm](https://config.qmk.fm/#/dz60/LAYOUT_olivierko) [WIP]

  - ANSI QWERTY split-backspace 'olivierko' w/ dedicated arrows
  - functions + media keys + mouse keys
  - special characters

```
make <KB>:shkschneider
qmk flash -kb <KB> -km shkschneider
```

This project does link _qmk_firmware_ for convenience, but make sure to have it up-to-date.
