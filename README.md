# Daniel Keyboard Repository

## Setup environment
```sh
bash setup_links.sh
```

## Compile firmware
```sh
make keychron/k8_pro/ansi/rgb:danielbibit
```
```sh
qmk compile -kb tada68 -km danielbibit

qmk compile -kb converter/usb_usb/pro_micro -km danielbibit
```
## Layout
### Main
![Main layout image](keyboard_layout_editor/dist/1_main.png)
* T: Tap
* H: Hold
* B: Both

### Dan FN
![Dan FN image](keyboard_layout_editor/dist/2_dan_fn.png)
* TermEdit: C-x C-e

### Mouse FN
![Mouse FN Image](keyboard_layout_editor/dist/3_mouse_fn.png)

### Control FN
![Control FN Image](keyboard_layout_editor/dist/4_control_fn.png)
