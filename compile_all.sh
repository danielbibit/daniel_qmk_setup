mkdir /workspace/bin

cd /workspace/qmk/upstream/qmk_firmware
qmk compile -kb tada68 -km danielbibit
qmk compile -kb converter/usb_usb/pro_micro -km danielbibit
make keychron/v4/ansi:danielbibit

cp *.bin /workspace/bin/
cp *.hex /workspace/bin/


cd /workspace/qmk/keychron_fork/qmk_firmware
make keychron/k8_pro/ansi/rgb:danielbibit

cp *.bin /workspace/bin/
