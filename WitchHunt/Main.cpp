#include"icb_gui.h"

int FRM1, SLE;
int keypressed;//this hold the ascii value of the key pressed on the keyboard
int boxlocation = 10;//location of our ship
int boxY = 350;// geminin y kordinatý
int enemyx;
int enemyy;
boolean dead;
int score;
boolean done = true;
int Newx, Newy;
HANDLE hTimerQueue = NULL;
ICBYTES m;
boolean enemyDead = false;
int witchHitBox[30];

void cowboy1() {
	FillRect(m, 0 + boxlocation, 10 + boxY, 5, 11, 0x000000);
	FillRect(m, 2 + boxlocation, 8 + boxY, 1, 16, 0x000000);
	FillRect(m, 3 + boxlocation, 0 + boxY, 5, 8, 0x000000);
	FillRect(m, 1 + boxlocation, 9 + boxY, 7, 1, 0x000000);
	FillRect(m, 5 + boxlocation, 10 + boxY, 2, 2, 0x000000);
	FillRect(m, 5 + boxlocation, 15 + boxY, 5, 18, 0x000000);
	FillRect(m, 3 + boxlocation, 22 + boxY, 2, 3, 0x000000);
	FillRect(m, 10 + boxlocation, 12 + boxY, 5, 21, 0x000000);
	FillRect(m, 7 + boxlocation, 13 + boxY, 3, 2, 0x000000);
	FillRect(m, 0 + boxlocation, 28 + boxY, 2, 7, 0x000000);
	FillRect(m, 2 + boxlocation, 26 + boxY, 3, 6, 0x000000);
	FillRect(m, 15 + boxlocation, 0 + boxY, 5, 9, 0x000000);
	FillRect(m, 16 + boxlocation, 9 + boxY, 6, 2, 0x000000);
	FillRect(m, 18 + boxlocation, 13 + boxY, 6, 7, 0x000000);
	FillRect(m, 15 + boxlocation, 18 + boxY, 2, 10, 0x000000);
	FillRect(m, 17 + boxlocation, 14 + boxY, 5, 18, 0x000000);
	FillRect(m, 5 + boxlocation, 15 + boxY, 5, 18, 0x000000);
	FillRect(m, 20 + boxlocation, 32 + boxY, 4, 3, 0x000000);
	FillRect(m, 22 + boxlocation, 10 + boxY, 1, 14, 0x000000);
	FillRect(m, 14 + boxlocation, 33 + boxY, 4, 1, 0x000000);


	FillRect(m, 4 + boxlocation, 1 + boxY, 2, 8, 0x000000);//silahlar
	FillRect(m, 5 + boxlocation, 1 + boxY, 1, 9, 0x000000);
	FillRect(m, 17 + boxlocation, 1 + boxY, 2, 8, 0x000000);
	FillRect(m, 16 + boxlocation, 1 + boxY, 1, 7, 0x000000);



	FillRect(m, 3 + boxlocation, 9 + boxY, 3, 2, 0x000000);//eller
	FillRect(m, 17 + boxlocation, 9 + boxY, 3, 2, 0x000000);

	FillRect(m, 1 + boxlocation, 11 + boxY, 3, 10, 0x000000);//kollar
	FillRect(m, 19 + boxlocation, 11 + boxY, 3, 3, 0x000000);
	FillRect(m, 20 + boxlocation, 14 + boxY, 3, 3, 0x000000);
	FillRect(m, 21 + boxlocation, 17 + boxY, 2, 7, 0x000000);



	FillRect(m, 10 + boxlocation, 13 + boxY, 5, 4, 0x000000);//þapka
	FillRect(m, 16 + boxlocation, 16 + boxY, 3, 9, 0x000000);
	FillRect(m, 6 + boxlocation, 16 + boxY, 3, 9, 0x000000);
	FillRect(m, 10 + boxlocation, 26 + boxY, 5, 2, 0x000000);
	FillRect(m, 8 + boxlocation, 24 + boxY, 9, 3, 0x000000);
	FillRect(m, 11 + boxlocation, 18 + boxY, 3, 5, 0x000000);
	FillRect(m, 8 + boxlocation, 14 + boxY, 9, 3, 0x000000);

	FillRect(m, 2 + boxlocation, 28 + boxY, 5, 3, 0x000000);//pelerin
	FillRect(m, 7 + boxlocation, 30 + boxY, 4, 3, 0x000000);
	FillRect(m, 19 + boxlocation, 26 + boxY, 2, 6, 0x000000);
	FillRect(m, 15 + boxlocation, 30 + boxY, 7, 3, 0x000000);
	FillRect(m, 10 + boxlocation, 31 + boxY, 5, 1, 0x000000);
	FillRect(m, 18 + boxlocation, 28 + boxY, 2, 2, 0x000000);
	FillRect(m, 10 + boxlocation, 29 + boxY, 5, 2, 0x000000);//peleringölge
	FillRect(m, 15 + boxlocation, 33 + boxY, 2, 2, 0x000000);
	FillRect(m, 8 + boxlocation, 28 + boxY, 2, 2, 0x000000);
	FillRect(m, 18 + boxlocation, 26 + boxY, 2, 2, 0x000000);

	FillRect(m, 11 + boxlocation, 17 + boxY, 3, 1, 0x000000);//üst detaylar
	FillRect(m, 10 + boxlocation, 23 + boxY, 5, 2, 0x000000);
	FillRect(m, 19 + boxlocation, 26 + boxY, 2, 6, 0x000000);
	FillRect(m, 15 + boxlocation, 30 + boxY, 7, 3, 0x000000);
	FillRect(m, 10 + boxlocation, 31 + boxY, 5, 1, 0x000000);
}
void cowboy() {
	FillRect(m, 0 + boxlocation, 10 + boxY, 5, 11, 0x000000);
	FillRect(m, 2 + boxlocation, 8 + boxY, 1, 16, 0x000000);
	FillRect(m, 3 + boxlocation, 0 + boxY, 5, 8, 0x000000);
	FillRect(m, 1 + boxlocation, 9 + boxY, 7, 1, 0x000000);
	FillRect(m, 5 + boxlocation, 10 + boxY, 2, 2, 0x000000);
	FillRect(m, 5 + boxlocation, 15 + boxY, 5, 18, 0x000000);
	FillRect(m, 3 + boxlocation, 22 + boxY, 2, 3, 0x000000);
	FillRect(m, 10 + boxlocation, 12 + boxY, 5, 21, 0x000000);
	FillRect(m, 7 + boxlocation, 13 + boxY, 3, 2, 0x000000);
	FillRect(m, 0 + boxlocation, 28 + boxY, 2, 7, 0x000000);
	FillRect(m, 2 + boxlocation, 26 + boxY, 3, 6, 0x000000);
	FillRect(m, 15 + boxlocation, 0 + boxY, 5, 9, 0x000000);
	FillRect(m, 16 + boxlocation, 9 + boxY, 6, 2, 0x000000);
	FillRect(m, 18 + boxlocation, 13 + boxY, 6, 7, 0x000000);
	FillRect(m, 15 + boxlocation, 18 + boxY, 2, 10, 0x000000);
	FillRect(m, 17 + boxlocation, 14 + boxY, 5, 18, 0x000000);
	FillRect(m, 5 + boxlocation, 15 + boxY, 5, 18, 0x000000);
	FillRect(m, 20 + boxlocation, 32 + boxY, 4, 3, 0x000000);
	FillRect(m, 22 + boxlocation, 10 + boxY, 1, 14, 0x000000);
	FillRect(m, 14 + boxlocation, 33 + boxY, 4, 1, 0x000000);


	FillRect(m, 4 + boxlocation, 1 + boxY, 2, 8, 0x5e5e5e);//silahlar
	FillRect(m, 5 + boxlocation, 1 + boxY, 1, 9, 0xb2b2b2);
	FillRect(m, 17 + boxlocation, 1 + boxY, 2, 8, 0x5e5e5e);
	FillRect(m, 16 + boxlocation, 1 + boxY, 1, 7, 0xb2b2b2);



	FillRect(m, 3 + boxlocation, 9 + boxY, 3, 2, 0xaa7a5d);//eller
	FillRect(m, 17 + boxlocation, 9 + boxY, 3, 2, 0xaa7a5d);

	FillRect(m, 1 + boxlocation, 11 + boxY, 3, 10, 0x3b3b3b);//kollar
	FillRect(m, 19 + boxlocation, 11 + boxY, 3, 3, 0x3B3B3B);
	FillRect(m, 20 + boxlocation, 14 + boxY, 3, 3, 0x3B3B3B);
	FillRect(m, 21 + boxlocation, 17 + boxY, 2, 7, 0x3B3B3B);



	FillRect(m, 10 + boxlocation, 13 + boxY, 5, 4, 0x66432E);//þapka
	FillRect(m, 16 + boxlocation, 16 + boxY, 3, 9, 0x66432E);
	FillRect(m, 6 + boxlocation, 16 + boxY, 3, 9, 0x66432E);
	FillRect(m, 10 + boxlocation, 26 + boxY, 5, 2, 0x66432E);
	FillRect(m, 8 + boxlocation, 24 + boxY, 9, 3, 0x66432E);
	FillRect(m, 11 + boxlocation, 18 + boxY, 3, 5, 0x66432E);
	FillRect(m, 8 + boxlocation, 14 + boxY, 9, 3, 0x66432E);

	FillRect(m, 2 + boxlocation, 28 + boxY, 5, 3, 0x551414);//pelerin
	FillRect(m, 7 + boxlocation, 30 + boxY, 4, 3, 0x551414);
	FillRect(m, 19 + boxlocation, 26 + boxY, 2, 6, 0x551414);
	FillRect(m, 15 + boxlocation, 30 + boxY, 7, 3, 0x551414);
	FillRect(m, 10 + boxlocation, 31 + boxY, 5, 1, 0x551414);
	FillRect(m, 18 + boxlocation, 28 + boxY, 2, 2, 0x551414);
	FillRect(m, 10 + boxlocation, 29 + boxY, 5, 2, 0x330c0c);//peleringölge
	FillRect(m, 15 + boxlocation, 33 + boxY, 2, 2, 0x330c0c);
	FillRect(m, 8 + boxlocation, 28 + boxY, 2, 2, 0x330c0c);
	FillRect(m, 18 + boxlocation, 26 + boxY, 2, 2, 0x330c0c);

	FillRect(m, 11 + boxlocation, 17 + boxY, 3, 1, 0x000000);//üst detaylar
	FillRect(m, 10 + boxlocation, 23 + boxY, 5, 2, 0x322117);
	FillRect(m, 19 + boxlocation, 26 + boxY, 2, 6, 0x551414);
	FillRect(m, 15 + boxlocation, 30 + boxY, 7, 3, 0x551414);
	FillRect(m, 10 + boxlocation, 31 + boxY, 5, 1, 0x551414);
}

void witch() {

	FillRect(m, 4 + enemyx, 0 + enemyy, 13, 3, 0x000000);//siyah
	FillRect(m, 5 + enemyx, 3 + enemyy, 11, 2, 0x000000);
	FillRect(m, 6 + enemyx, 5 + enemyy, 9, 1, 0x000000);
	FillRect(m, 7 + enemyx, 6 + enemyy, 7, 2, 0x000000);
	FillRect(m, 8 + enemyx, 8 + enemyy, 5, 3, 0x000000);
	FillRect(m, 6 + enemyx, 10 + enemyy, 2, 16, 0x000000);
	FillRect(m, 12 + enemyx, 10 + enemyy, 2, 16, 0x000000);
	FillRect(m, 0 + enemyx, 14 + enemyy, 20, 5, 0x000000);
	FillRect(m, 1 + enemyx, 13 + enemyy, 18, 7, 0x000000);
	FillRect(m, 2 + enemyx, 12 + enemyy, 16, 9, 0x000000);
	FillRect(m, 4 + enemyx, 11 + enemyy, 12, 15, 0x000000);
	FillRect(m, 2 + enemyx, 25 + enemyy, 5, 5, 0x000000);
	FillRect(m, 3 + enemyx, 23 + enemyy, 14, 2, 0x000000);
	FillRect(m, 3 + enemyx, 30 + enemyy, 14, 2, 0x000000);
	FillRect(m, 13 + enemyx, 25 + enemyy, 5, 5, 0x000000);
	FillRect(m, 8 + enemyx, 26 + enemyy, 4, 16, 0x000000);
	FillRect(m, 4 + enemyx, 32 + enemyy, 12, 1, 0x000000);
	FillRect(m, 5 + enemyx, 33 + enemyy, 10, 1, 0x000000);

	FillRect(m, 5 + enemyx, 1 + enemyy, 11, 1, 0xae9d0f);//süpürge
	FillRect(m, 6 + enemyx, 2 + enemyy, 9, 1, 0xae9d0f);
	FillRect(m, 6 + enemyx, 3 + enemyy, 9, 1, 0x82640c);
	FillRect(m, 8 + enemyx, 4 + enemyy, 1, 3, 0x82640c);
	FillRect(m, 12 + enemyx, 4 + enemyy, 1, 3, 0x82640c);


	FillRect(m, 10 + enemyx, 5 + enemyy, 1, 17, 0x60006e);//þapka
	FillRect(m, 9 + enemyx, 8 + enemyy, 3, 14, 0x60006e);
	FillRect(m, 8 + enemyx, 11 + enemyy, 5, 11, 0x60006e);
	FillRect(m, 1 + enemyx, 15 + enemyy, 5, 4, 0x60006e);
	FillRect(m, 2 + enemyx, 14 + enemyy, 4, 5, 0x60006e);
	FillRect(m, 3 + enemyx, 13 + enemyy, 3, 1, 0x60006e);
	FillRect(m, 7 + enemyx, 16 + enemyy, 1, 6, 0x60006e);
	FillRect(m, 6 + enemyx, 18 + enemyy, 1, 4, 0x60006e);
	FillRect(m, 15 + enemyx, 13 + enemyy, 3, 7, 0x60006e);
	FillRect(m, 18 + enemyx, 14 + enemyy, 1, 5, 0x60006e);
	FillRect(m, 13 + enemyx, 16 + enemyy, 1, 6, 0x60006e);
	FillRect(m, 14 + enemyx, 18 + enemyy, 1, 3, 0x60006e);
	FillRect(m, 4 + enemyx, 20 + enemyy, 3, 1, 0x60006e);
	FillRect(m, 6 + enemyx, 11 + enemyy, 1, 4, 0x490053);

	FillRect(m, 4 + enemyx, 24 + enemyy, 2, 7, 0x490053);//kollar
	FillRect(m, 14 + enemyx, 24 + enemyy, 2, 7, 0x490053);
	FillRect(m, 6 + enemyx, 31 + enemyy, 2, 2, 0x490053);
	FillRect(m, 12 + enemyx, 31 + enemyy, 2, 2, 0x490053);
	FillRect(m, 3 + enemyx, 26 + enemyy, 1, 3, 0x490053);
	FillRect(m, 16 + enemyx, 26 + enemyy, 1, 3, 0x490053);
	FillRect(m, 7 + enemyx, 23 + enemyy, 6, 1, 0x00420d);//yüz
	FillRect(m, 9 + enemyx, 24 + enemyy, 2, 2, 0x00420d);
	FillRect(m, 8 + enemyx, 24 + enemyy, 4, 1, 0x00420d);

	FillRect(m, 9 + enemyx, 32 + enemyy, 2, 2, 0x00420d);//el

	FillRect(m, 9 + enemyx, 27 + enemyy, 2, 4, 0x643b00);//sopa
	FillRect(m, 9 + enemyx, 37 + enemyy, 2, 4, 0x643b00);

}

void witch1() {

	FillRect(m, 4 + enemyx, 0 + enemyy, 13, 3, 0x000000);//siyah
	FillRect(m, 5 + enemyx, 3 + enemyy, 11, 2, 0x000000);
	FillRect(m, 6 + enemyx, 5 + enemyy, 9, 1, 0x000000);
	FillRect(m, 7 + enemyx, 6 + enemyy, 7, 2, 0x000000);
	FillRect(m, 8 + enemyx, 8 + enemyy, 5, 3, 0x000000);
	FillRect(m, 6 + enemyx, 10 + enemyy, 2, 16, 0x000000);
	FillRect(m, 12 + enemyx, 10 + enemyy, 2, 16, 0x000000);
	FillRect(m, 0 + enemyx, 14 + enemyy, 20, 5, 0x000000);
	FillRect(m, 1 + enemyx, 13 + enemyy, 18, 7, 0x000000);
	FillRect(m, 2 + enemyx, 12 + enemyy, 16, 9, 0x000000);
	FillRect(m, 4 + enemyx, 11 + enemyy, 12, 15, 0x000000);
	FillRect(m, 2 + enemyx, 25 + enemyy, 5, 5, 0x000000);
	FillRect(m, 3 + enemyx, 23 + enemyy, 14, 2, 0x000000);
	FillRect(m, 3 + enemyx, 30 + enemyy, 14, 2, 0x000000);
	FillRect(m, 13 + enemyx, 25 + enemyy, 5, 5, 0x000000);
	FillRect(m, 8 + enemyx, 26 + enemyy, 4, 16, 0x000000);
	FillRect(m, 4 + enemyx, 32 + enemyy, 12, 1, 0x000000);
	FillRect(m, 5 + enemyx, 33 + enemyy, 10, 1, 0x000000);

	FillRect(m, 5 + enemyx, 1 + enemyy, 11, 1, 0x000000);//süpürge
	FillRect(m, 6 + enemyx, 2 + enemyy, 9, 1, 0x000000);
	FillRect(m, 6 + enemyx, 3 + enemyy, 9, 1, 0x000000);
	FillRect(m, 8 + enemyx, 4 + enemyy, 1, 3, 0x000000);
	FillRect(m, 12 + enemyx, 4 + enemyy, 1, 3, 0x000000);


	FillRect(m, 10 + enemyx, 5 + enemyy, 1, 17, 0x000000);//þapka
	FillRect(m, 9 + enemyx, 8 + enemyy, 3, 14, 0x000000);
	FillRect(m, 8 + enemyx, 11 + enemyy, 5, 11, 0x000000);
	FillRect(m, 1 + enemyx, 15 + enemyy, 5, 4, 0x000000);
	FillRect(m, 2 + enemyx, 14 + enemyy, 4, 5, 0x000000);
	FillRect(m, 3 + enemyx, 13 + enemyy, 3, 1, 0x000000);
	FillRect(m, 7 + enemyx, 16 + enemyy, 1, 6, 0x000000);
	FillRect(m, 6 + enemyx, 18 + enemyy, 1, 4, 0x000000);
	FillRect(m, 15 + enemyx, 13 + enemyy, 3, 7, 0x000000);
	FillRect(m, 18 + enemyx, 14 + enemyy, 1, 5, 0x000000);
	FillRect(m, 13 + enemyx, 16 + enemyy, 1, 6, 0x000000);
	FillRect(m, 14 + enemyx, 18 + enemyy, 1, 3, 0x000000);
	FillRect(m, 4 + enemyx, 20 + enemyy, 3, 1, 0x000000);
	FillRect(m, 6 + enemyx, 11 + enemyy, 1, 4, 0x000000);

	FillRect(m, 4 + enemyx, 24 + enemyy, 2, 7, 0x000000);//kollar
	FillRect(m, 14 + enemyx, 24 + enemyy, 2, 7, 0x000000);
	FillRect(m, 6 + enemyx, 31 + enemyy, 2, 2, 0x000000);
	FillRect(m, 12 + enemyx, 31 + enemyy, 2, 2, 0x000000);
	FillRect(m, 3 + enemyx, 26 + enemyy, 1, 3, 0x000000);
	FillRect(m, 16 + enemyx, 26 + enemyy, 1, 3, 0x000000);
	FillRect(m, 7 + enemyx, 23 + enemyy, 6, 1, 0x000000);//yüz
	FillRect(m, 9 + enemyx, 24 + enemyy, 2, 2, 0x000000);
	FillRect(m, 8 + enemyx, 24 + enemyy, 4, 1, 0x000000);

	FillRect(m, 9 + enemyx, 32 + enemyy, 2, 2, 0x000000);//el

	FillRect(m, 9 + enemyx, 27 + enemyy, 2, 4, 0x000000);//sopa
	FillRect(m, 9 + enemyx, 37 + enemyy, 2, 4, 0x000000);

}

void ICGUI_Create()
{
	ICG_MWTitle("Witch Hunt");
	ICG_MWSize(450, 500);
}

void Shoot() {

	int bulletx = 10;
	int bullety = 350;
	int tempx, tempy;
	bulletx = boxlocation + 10;

	cowboy();

	if (bullety < 0) {
		FillRect(m, bulletx, bullety, 2, 15, 0x000000);
		bullety = 370;
	}
	while (bullety > 0) {
		FillRect(m, bulletx, bullety, 2, 15, 0x000000);
		bullety -= 1;
		FillRect(m, bulletx, bullety, 2, 15, 0x00ff00);
		Sleep(0.7);
		DisplayImage(FRM1, m);
		tempx = bulletx;
		tempy = bullety;

		if (enemyy + 30 == tempy) {

			for (int i = 0; i < 30; i++) {
				if (witchHitBox[i] == tempx || witchHitBox[i] == tempx + 1) {

					enemyDead = true;
					dead = true;
					score += 10;
					ICG_SetWindowText(SLE, "");
					ICG_printf(SLE, "%d", score);
					while (bullety > 0) {
						FillRect(m, bulletx, bullety, 2, 15, 0x000000);
						DisplayImage(FRM1, m);
						bullety -= 1;
					}

					break;

				}
			}

		}

	}
	if (bullety <= 0) FillRect(m, bulletx, bullety, 2, 15, 0x000000);

	return;
}

void RandomKor() {

	if (done == true) {

		Newx = 1 + (rand() % 340);
		Newy = 1 + (rand() % 250);

		done = false;

	}


}

void WitchCoor() {

	for (int i = 0; i < 30; i++) {

		witchHitBox[i] = enemyx + i;

	}

}
void SpawnEnemy1() {

	enemyDead = false;
	dead = false;
	enemyx = 1 + (rand() % 400);
	enemyy = 5;

	WitchCoor();

	while (enemyDead == false) {

		if (done == true)RandomKor();

		while (enemyx != Newx && enemyy != Newy) {

			witch1();

			if (Newx > enemyx) enemyx += 1;
			else if (Newx < enemyx) enemyx -= 1;
			else enemyx = Newx;

			if (Newy > enemyy) enemyy += 1;
			else if (Newy < enemyy) enemyy -= 1;
			else enemyy = Newy;

			WitchCoor();

			if (dead == true) {
				witch1();
				DisplayImage(FRM1, m);
				break;
			}

			witch();
			DisplayImage(FRM1, m);
			Sleep(10);
		}

		done = true;
	}
	if (enemyDead == true) SpawnEnemy1();
}
// Thread called by the timer
VOID CALLBACK SlidingBox(PVOID lpParam, BOOLEAN TimerOrWaitFired)
{

	cowboy1();
	if (keypressed == 37) {

		if (boxlocation >= 5) boxlocation -= 2;

	}
	if (keypressed == 39) {

		if (boxlocation <= 365) boxlocation += 2;

	}
	if (keypressed == 38) {

	}//up
	if (keypressed == 40);//down
	if (keypressed == 32) {

		keypressed = NULL;

		Shoot();
	};

	cowboy();
	DisplayImage(FRM1, m);
}

void SpawnEnemy(PVOID lpParam) {

	SpawnEnemy1();

}


void butonfonk()
{

	HANDLE hTimer = NULL;
	DWORD dw;
	CreateImage(m, 400, 400, ICB_UINT);
	hTimerQueue = CreateTimerQueue();
	if (NULL == hTimerQueue)
	{
		return;
	}
	//starts 1000 ms later calls thread every 30 ms
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)SpawnEnemy, NULL, 0, &dw);
	CreateTimerQueueTimer(&hTimer, hTimerQueue, (WAITORTIMERCALLBACK)SlidingBox, NULL, 1000, 30, 0);

	SetFocus(ICG_GetMainWindow());
}

void WhenKeyPressed(int k)
{
	keypressed = k;

}


void ICGUI_main()
{
	ICG_Button(5, 5, 120, 25, "Start", butonfonk);
	FRM1 = ICG_FrameMedium(5, 40, 400, 400);
	SLE = ICG_SLEditSunken(300, 5, 50, 25, "");
	ICG_SetOnKeyPressed(WhenKeyPressed);

}

