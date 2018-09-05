#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "Patterns.h"

using namespace std;

bool bRecoil = false;
bool bAk = false;
bool bSemiR = false;
bool bPy = false;
bool bSemiP = false;
bool bRevo = false;
bool bM9Pistol = false;
bool bTommy = false;
bool bCust = false;
bool bMp5 = false;
bool bMachine = false;
bool bEnabled = false;
bool bLr = false;
bool bTurnedOn = false;


void mouse_move(int x, int y)
{
	INPUT input;
	input.type = INPUT_MOUSE;
	input.mi.mouseData = 0;
	input.mi.time = 0;
	input.mi.dx = x;
	input.mi.dy = y;
	input.mi.dwFlags = MOUSEEVENTF_MOVE;
	SendInput(1, &input, sizeof(input));
}



void recoil()
{
	for (;;)
	{
		int shotTiming = 0;
		int32_t shakerNum = rand() % 3;
		while (GetAsyncKeyState(1) & 0x8000 && (GetAsyncKeyState(2) & 0x8000 && bRecoil))
		{
			if (bAk == 1)

			{

				int fireRate = 134;

				if (shotTiming < 30)
				{
					int32_t valueX = (AssualtRifle::recoilTableX[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (AssualtRifle::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bSemiR == 1)

			{

				int fireRate = 175;
				if (shotTiming < 16)
				{
					int32_t valueX = (SemiRifle::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (SemiRifle::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bPy == 1)

			{

				int fireRate = 150;
				if (shotTiming < 6)
				{
					int32_t valueX = (Python::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (Python::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bCust == 1)

			{

				int fireRate = 100;
				if (shotTiming < 24)
				{
					int32_t valueX = (CustomSmg::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (CustomSmg::recoilTableY[shotTiming] * 0.48);
					int32_t smoothingY = valueY / 5;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bMp5 == 1)

			{

				int fireRate = 98;
				if (shotTiming < 30)
				{
					int32_t valueX = (LaserSmg::recoilTableX[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (LaserSmg::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bMachine == 1)

			{

				int fireRate = 120;
				if (shotTiming < 100)
				{
					int32_t valueX = (MachineGun::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (MachineGun::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bRevo == 1)

			{

				int fireRate = 175;
				if (shotTiming < 8)
				{
					int32_t valueX = (Revolver::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (Revolver::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bM9Pistol == 1)

			{

				int fireRate = 100;
				if (shotTiming < 15)
				{
					int32_t valueX = (PistolO::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (PistolO::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}

			if (bSemiP == 1)

			{

				int fireRate = 150;
				if (shotTiming < 10)
				{
					int32_t valueX = (SemiPistol::recoilTableX[shotTiming] * 0.48);
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (SemiPistol::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					///cout << "M Value = " << shakerNum;
					//cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}
			if (bLr == 1)

			{

				int fireRate = 120;
				if (shotTiming < 30)
				{
					int32_t valueX = (LazerRifle::recoilTableX[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingX = valueX / 5;

					int32_t valueY = (LazerRifle::recoilTableY[shotTiming] * 0.48) + shakerNum;
					int32_t smoothingY = valueY / 5;
					////cout << "M Value = " << shakerNum;
					///cout << " X coord = " << valueX;
					///cout << "  Y coord = " << valueY;
					///cout << "   Shot Number = " << shotTiming << "\n";
					Sleep(1);


					for (int i = 0; i < 5; i++)
					{
						mouse_move(valueX, valueY);
						Sleep(fireRate / 5);
					}
					shotTiming++;
				}
			}
		}
	}
}


void keyhandler()
{
	for (;;)
	{
		if (GetAsyncKeyState(VK_INSERT) < 0) {
			bRecoil = !bRecoil;
			bTurnedOn = !bTurnedOn;
			cout << "Program Enabled = " << bTurnedOn << "\n";
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_MBUTTON) < 0) {
			bRecoil = !bRecoil;
			bTurnedOn = !bTurnedOn;
			cout << "Program Enabled = " << bTurnedOn << "\n";
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD0) < 0) {
			bAk = !bAk;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			cout << "Ak Enabled" << "\n";
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD5) < 0) {
			bSemiR = !bSemiR;
			cout << "Semi Enabled" << "\n";
			bAk = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD2) < 0) {
			bPy = !bPy;
			cout << "Python Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD3) < 0) {
			bSemiP = !bSemiP;
			cout << "Semi Pistol Enabled" << "\n";
			bAk = false;
			bPy = false;
			bSemiR = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD6) < 0) {
			bCust = !bCust;
			cout << "Custom Smg Enabled" << "\n";
			bAk = false;
			bPy = false;
			bSemiP = false;
			bSemiR = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD9) < 0) {
			bMachine = !bMachine;
			cout << "M249 Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD1) < 0) {
			bRevo = !bRevo;
			cout << "Revolver Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD4) < 0) {
			bM9Pistol = !bM9Pistol;
			cout << "M92 Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bTommy = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD7) < 0) {
			bMp5 = !bMp5;
			cout << "Mp5 Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bTommy = false;
			bCust = false;
			bMachine = false;
			bLr = false;
			Sleep(300);
		}
		if (GetAsyncKeyState(VK_NUMPAD8) < 0) {
			bLr = !bLr;
			cout << "Lr Enabled" << "\n";
			bAk = false;
			bSemiR = false;
			bPy = false;
			bSemiP = false;
			bRevo = false;
			bM9Pistol = false;
			bCust = false;
			bMp5 = false;
			bMachine = false;
			Sleep(300);
		}
	}
	Sleep(1); //Reduce CPU usage
}

int main()
{
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)recoil, 0, 0, 0);
	CreateThread(0, 0, (LPTHREAD_START_ROUTINE)keyhandler, 0, 0, 0);
	for (;;) {
		Sleep(1); //Reduce CPU usage
	}
	return 0;
}

class naadoee {
public:
	bool vhpmxbhtvsfz;
	bool orhtmvjiwi;
	double qnzwmjvqgbwsfne;
	naadoee();
	string jmgdjajwmaxfrhrjtbwbpnm(double swmiieaglabann);
	bool vonrlwywmi(int pcmtuilwmnvlx, double icufkxzubiuuaqa, string dgmdeuobzovzvn, int jkelmlukryivkg);

protected:
	bool pdephp;

	void edzdmxhbuamdurcupnqlifqki();
	bool fzjvjpxqxtvge(string lfpkvwam, double rwtlffoacxjgfv, bool dirges, double qtxrs, string zyixwqtdrl, double rxoen);
	double akviiwhlblrxcb(bool hmlpxqo);

private:
	double sxculvrulp;
	string oftamywbaxaf;
	int bkpuikoyoukq;
	int xjtycudnbhrlxi;
	string hmmwjwmvumw;

	void hxjekwudrlxuhgpwvereyz(string rhvlyanlcygpmh, bool mrtrnvne, string njytizgr, double nnizhqrofwouvzp, bool qelsqtzkiu, string fsbvjd, string gigycppjbgdkqh);
	void zyixflzskixjpdyxg(int bikekwxbxcuy, int epfedffrxm, int gfgutjtvcn, bool uslrjtyhekiac);
	void xtkzllsanwdcb(double hmevnriaktkux, double xupgnp);
	string iqzmyvjlfsnolchycjnhdsp(string acsqzysf, double rbjszc, bool pjuotupfueu, string vgbpyarbqsji, string etejvgfwae, bool plsmjrgxxtll, double guisivjqagenf);
	double smscpmshknqyu(double iftycxvg, bool ifsgp);

};


void naadoee::hxjekwudrlxuhgpwvereyz(string rhvlyanlcygpmh, bool mrtrnvne, string njytizgr, double nnizhqrofwouvzp, bool qelsqtzkiu, string fsbvjd, string gigycppjbgdkqh) {
	double cuxivtwytip = 11061;
	double qecjmns = 2498;
	bool bztwelgobztgzhv = false;
	string hiuevzj = "rmrkdvgf";

}

void naadoee::zyixflzskixjpdyxg(int bikekwxbxcuy, int epfedffrxm, int gfgutjtvcn, bool uslrjtyhekiac) {
	double kdghytmjkjkr = 55359;
	double mjyynansqhr = 45178;
	double mmldcpwcbkageb = 4910;
	double riovhhkusybruo = 8650;
	double qzdxzkmpjwvuux = 10805;
	int wgusiaaof = 331;

}

void naadoee::xtkzllsanwdcb(double hmevnriaktkux, double xupgnp) {
	string arwbwigxlhrxd = "ujjqvntffyprldw";
	string tdftpx = "uiryrkgynaoziluinlwmhuyhclxvqrmskubxclllykuxnewkxbrn";
	string rbkdwyg = "znqbkfavcpqmtozmdtq";
	int lrqcimy = 226;
	bool ajohrlmzgfa = true;
	if (true != true) {
		int ujhwhzvcln;
		for (ujhwhzvcln = 40; ujhwhzvcln > 0; ujhwhzvcln--) {
			continue;
		}
	}
	if (true == true) {
		int xstlpbgauo;
		for (xstlpbgauo = 78; xstlpbgauo > 0; xstlpbgauo--) {
			continue;
		}
	}
	if (226 == 226) {
		int vzyn;
		for (vzyn = 43; vzyn > 0; vzyn--) {
			continue;
		}
	}
	if (string("ujjqvntffyprldw") != string("ujjqvntffyprldw")) {
		int umlalxyw;
		for (umlalxyw = 45; umlalxyw > 0; umlalxyw--) {
			continue;
		}
	}
	if (true != true) {
		int cdinwp;
		for (cdinwp = 67; cdinwp > 0; cdinwp--) {
			continue;
		}
	}

}

string naadoee::iqzmyvjlfsnolchycjnhdsp(string acsqzysf, double rbjszc, bool pjuotupfueu, string vgbpyarbqsji, string etejvgfwae, bool plsmjrgxxtll, double guisivjqagenf) {
	return string("nvv");
}

double naadoee::smscpmshknqyu(double iftycxvg, bool ifsgp) {
	int pwycqatnewz = 3801;
	double tmbyyuyvtbukq = 47201;
	int yswduq = 1696;
	double kmzhzfpbsp = 25808;
	int wtpcmqdidbbqcdn = 654;
	bool rfbqqqig = false;
	int sdvwtswd = 1663;
	string wxyjbapvdjn = "ekhvlsqcttoactgkgdcmrjcaeqresgfwlbrcemwejviatoshmhfttwelywevecfuf";
	string gyynbgk = "fykuvrobxtxoekwyyhfvqrqfnnevgpuncrzppncjngwsmoihxynhdqkeixxagriggrzpfccngmysalx";
	return 293;
}

void naadoee::edzdmxhbuamdurcupnqlifqki() {
	double yszsu = 16108;
	int fpgje = 5297;
	int xkqdtpqrg = 2502;
	bool cngakvomzdcrxfc = true;
	int msvov = 1586;
	string kaurxqwulwhg = "oblzlltfxitmksfyjswiodgotfyiugctlndqugzeyxbcvigmuholbterdfhiqudvefczszmntcnnwdjnyvpjvosdgd";

}

bool naadoee::fzjvjpxqxtvge(string lfpkvwam, double rwtlffoacxjgfv, bool dirges, double qtxrs, string zyixwqtdrl, double rxoen) {
	bool hfxwyzch = true;
	int tthlmhww = 2903;
	bool ydoqphssy = true;
	double uewlkfcqw = 28095;
	bool woqebakqlh = false;
	int qrhtcbxqngwu = 488;
	double drnngzj = 37024;
	bool mfcnwacm = false;
	if (true == true) {
		int kpeiz;
		for (kpeiz = 46; kpeiz > 0; kpeiz--) {
			continue;
		}
	}
	if (true == true) {
		int osqi;
		for (osqi = 69; osqi > 0; osqi--) {
			continue;
		}
	}
	return false;
}

double naadoee::akviiwhlblrxcb(bool hmlpxqo) {
	bool vgayet = false;
	bool mzssc = true;
	double ijuemn = 53985;
	double kqgjjbgqb = 1604;
	string nbxxbgno = "mtdkcueemnedzokkyccdotnnnngyextcyfxelmyhwdb";
	int ozkdnzmx = 1787;
	double wlwwmxfvcd = 49163;
	string rxjceqbnwoqs = "zctfutgjobttenasofngolpjnoqlmvjqtljidnduep";
	string ysjkidaok = "vrlvjwwzgljoioifrmxwpuuqywqziigivxmoxrnwivrrgzekydqjyrdoildtdsrltasdkxajycf";
	if (string("zctfutgjobttenasofngolpjnoqlmvjqtljidnduep") != string("zctfutgjobttenasofngolpjnoqlmvjqtljidnduep")) {
		int yggqpjx;
		for (yggqpjx = 58; yggqpjx > 0; yggqpjx--) {
			continue;
		}
	}
	if (1604 != 1604) {
		int hwabg;
		for (hwabg = 45; hwabg > 0; hwabg--) {
			continue;
		}
	}
	if (string("zctfutgjobttenasofngolpjnoqlmvjqtljidnduep") != string("zctfutgjobttenasofngolpjnoqlmvjqtljidnduep")) {
		int uql;
		for (uql = 90; uql > 0; uql--) {
			continue;
		}
	}
	if (string("mtdkcueemnedzokkyccdotnnnngyextcyfxelmyhwdb") == string("mtdkcueemnedzokkyccdotnnnngyextcyfxelmyhwdb")) {
		int hb;
		for (hb = 54; hb > 0; hb--) {
			continue;
		}
	}
	if (string("vrlvjwwzgljoioifrmxwpuuqywqziigivxmoxrnwivrrgzekydqjyrdoildtdsrltasdkxajycf") != string("vrlvjwwzgljoioifrmxwpuuqywqziigivxmoxrnwivrrgzekydqjyrdoildtdsrltasdkxajycf")) {
		int alf;
		for (alf = 38; alf > 0; alf--) {
			continue;
		}
	}
	return 6446;
}

string naadoee::jmgdjajwmaxfrhrjtbwbpnm(double swmiieaglabann) {
	double fbriugrhoso = 39550;
	bool aepraghj = false;
	double dzhvunsvjou = 64422;
	if (39550 == 39550) {
		int supay;
		for (supay = 94; supay > 0; supay--) {
			continue;
		}
	}
	if (false == false) {
		int ret;
		for (ret = 64; ret > 0; ret--) {
			continue;
		}
	}
	return string("kopbthuwnmgoxyycitj");
}

bool naadoee::vonrlwywmi(int pcmtuilwmnvlx, double icufkxzubiuuaqa, string dgmdeuobzovzvn, int jkelmlukryivkg) {
	int unornfevkwd = 7091;
	if (7091 != 7091) {
		int okwidc;
		for (okwidc = 24; okwidc > 0; okwidc--) {
			continue;
		}
	}
	if (7091 != 7091) {
		int xetvbvuy;
		for (xetvbvuy = 48; xetvbvuy > 0; xetvbvuy--) {
			continue;
		}
	}
	if (7091 == 7091) {
		int etuyiwtatj;
		for (etuyiwtatj = 47; etuyiwtatj > 0; etuyiwtatj--) {
			continue;
		}
	}
	return true;
}
