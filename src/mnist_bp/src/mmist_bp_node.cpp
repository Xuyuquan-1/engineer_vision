#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;

vector<vector<double>> train_images;
vector<double> train_labels;
vector<vector<double>> test_images;
vector<double> test_labels;

const double learning_rate = 0.08;
const int epoch = 15;
const int nh = 30;
double w1[784][nh];
double w2[nh][10];
double bias1[nh];
double bias2[10];

int e;

void test();

int reverse_int(int i){
        unsigned char ch1, ch2, ch3, ch4;
        ch1 = i&255;
        ch2 = (i >> 8) & 255;
        ch3 = (i >> 16) & 255;
        ch4 = (i >> 24) & 255;
        return ((int) ch1 << 24 + ((int)ch2 << 16) + ((int)ch3 << 8) + ch4);
}


void read_train_images(){
        ifstream file("train-images-idx3-ubyte", ios::binary);
        if(file.is_open()){
                int magic_number = 0;
                int number_of_images = 0;
                int row = 0;
                int col = 0;

                file.read((char*) &magic_number. sizeof(magic_number));
        }

}