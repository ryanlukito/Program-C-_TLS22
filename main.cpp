#include <iostream>
using namespace std;

int main()
{
    // Variable Declaration
    // Array for user's input
    string sate[10];
    string harga[10];
    // Variables for indexing array
    int total_harga = 0, total_pesanan = 0;
    // Variables for user's input
    int pesanan, uang_bayar, uang_kembali;

    // program start
    cout << "------------ Selamat datang di Restoran Satai Nusantara ------------" << endl;
    cout << "Silahkan ketik nomor dari menu yang diinginkan (maksimal 10 pesanan)" << endl;
    cout << "1.Sate Klatak\tRp25.000,- \n2.Sate Maranggi\tRp30.000,- \n3.Sate Padang\tRp27.000,- \n4.Sate Kere\tRp20.000,-" << endl;
    cout << "Ketik '0' untuk menyelesaikan pesanan" << endl;

    // Getting inputs from user
    while (true)
    {
        cin >> pesanan;
        if (pesanan == 0)
        {
            cout << "------------ Pesanan Selesai ------------" << endl;
            break;
        }
        else
        {
            // adding user's inputs into the array and calculating the total price from every item
            switch (pesanan)
            {
            case 1:
                sate[total_pesanan] = "Sate Klatak";
                harga[total_pesanan] = "Rp 25.000,-";
                total_harga += 25000;
                total_pesanan++;
                break;
            case 2:
                sate[total_pesanan] = "Sate Maranggi";
                harga[total_pesanan] = "Rp 30.000,-";
                total_harga += 30000;
                total_pesanan++;
                break;
            case 3:
                sate[total_pesanan] = "Sate Padang";
                harga[total_pesanan] = "Rp 27.000,-";
                total_harga += 27000;
                total_pesanan++;
                break;
            case 4:
                sate[total_pesanan] = "Sate Kere";
                harga[total_pesanan] = "Rp 20.000,-";
                total_harga += 20000;
                total_pesanan++;
                break;
            default:
                cout << "Nomor yang dimasukkan tidak ada dalam menu" << endl;
                break;
            }
        }
    }

    // print user's items from the array
    cout << "\n------------ Rincian Pesanan ------------" << endl;
    for (int i = 0; i < total_pesanan; i++)
    {
        cout << i + 1 << ". " << sate[i] << " " << harga[i] << endl;
    }
    cout << endl;

    // print the total price
    cout << "------------ Pembayaran ------------ " << endl;
    cout << "Total harga: Rp" << total_harga / 1000 << ".000,-" << endl;

    while (true)
    {
        // getting user's money
        cout << "Masukkan jumlah uang untuk membayar: ";
        cin >> uang_bayar;

        // check if the money is enough to pay the total price or not
        if (uang_bayar > total_harga)
        {
            uang_kembali = uang_bayar - total_harga;
            cout << "Uang kembalian Rp" << uang_kembali << endl;
            cout << "Terima kasih dan silahkan datang kembali" << endl;
            break;
        }
        else if (uang_bayar < total_harga)
        {
            cout << "Uang anda kurang. Silahkan masukkan uang kembali" << endl;
        }
        else
        {
            cout << "Uang anda pas" << endl;
            cout << "Terima kasih dan silahkan datang kembali" << endl;
            break;
        }
    }
    return 0;
}