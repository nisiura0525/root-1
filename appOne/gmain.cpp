#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;  //let�^�@float�Ƃ��Ă�int���Ă��g����݂�����
    let length = 0;
    while (notQuit) {
        clear(3, 252, 227);
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A)) {
            --area;
        }

        length = sqrt(area);//sq�̓X�N�G�A�@rt�̓��[�g�̗�
        mathAxis(4.1);//()�����ő�Ƃ����������̃}�X���������
        
        fill(255, 200, 0);
        mathRect(0, 0, length, -length);
        textSize(50);
        text("�ʐρ@�� "+ area, 0, 60);
        text("��"+ area + "=" + length, 0, 120);
        //let�^�Ȃ�+��2�Ȃ��čs�����Ƃ��ł���
    }
}
/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let area = 4;
    let length = 0;
    while (notQuit) {
        //�����`�̖ʐς�ύX����
        if (isTrigger(KEY_D)) {
            ++area;
        }
        if (isTrigger(KEY_A) && area > 0) {
            --area;
        }
        //�����`�̖ʐς����ӂ̒��������߂�
        length = sqrt(area);

        clear(160);
        //XY���B�����͂��̕\���ő�l
        mathAxis(4.1);
        //�����`
        stroke(160, 200, 255);
        strokeWeight(4);
        fill(255, 200, 200);
        mathRect(0, 0, length, -length);
        //����
        fill(255, 255, 200);
        textSize(50);
        text("�ʐ� = " + area, 0, 60);
        text("��" + area + " = " + length, 0, 120);
    }
}
*/