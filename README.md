# ShkSchneider's Quantum Mechanical Keyboard(s)

> This need to be linked into a working [qmk-firmware](https://github.com/qmk/qmk_firmware) repository.
>
> Also: you should install system-wide qmk (to avoid udev rules problems).

- **xiudi/xd60/rev3** [config.qmk.fm](https://config.qmk.fm/#/xiudi/xd60/rev3/LAYOUT_60_ansi_split_bs_rshift) [keyboard-layout-editor](http://www.keyboard-layout-editor.com/#/gists/86fc87c6caffee86ffa3ae33e84f2f58)

  - ANSI QWERTY split-backspace split-shifts
  - functions + arrows + media keys
  - mouse keys
  - special characters

```
cd keyboards/xiudi/xd60/keymaps && \
 ln -s ../../../../../qmk/keyboards/xiudi/xd60/keymaps/shkschneider . && \
 cd -
qmk compile -kb xiudi/xd60/rev3 -km shkschneider
qmk flash -kb xiudi/xd60/rev3 -km shkschneider
```

- **dz60** [config.qmk.fm](https://config.qmk.fm/#/dz60/LAYOUT_olivierko) [WIP]

  - ANSI QWERTY split-backspace 'olivierko' w/ dedicated arrows
  - functions + media keys + mouse keys
  - special characters
