 void addPatient(const string& name, int age, const string& Notes) {
        Patient pt;
        pt.name = name;
        pt.age = age;
        pt.Notes = trieuChung;
        danhSachBenhNhan.push_back(pt);
        cout << "Da them benh nhan: " << name << endl;
    }

    void display() {
        if (danhSachBenhNhan.empty()) {
            cout << "Khong co benh nhan nao trong danh sach!" << endl;
            return;
        }

        cout << "Danh sach benh nhan:" << endl;
        for (size_t i = 0; i < danhSachBenhNhan.size(); i++) {
            cout << i + 1 << ". Name: " << danhSachBenhNhan[i].name 
                 << ", Age: " << danhSachBenhNhan[i].age 
                 << ", TrieuChung: " << danhSachBenhNhan[i].trieuChung << endl;
        }
    }

    void findBenhNhan(const string& name) {
        auto it = find_if(danhSachBenhNhan.begin(), danhSachBenhNhan.end(), [&name](const Patient& bn) {
            return bn.name == name;
        });

        if (it != danhSachBenhNhan.end()) {
            cout << "Benh nhan tim thay: " << it->name
                 << ", Tuoi: " << it->age 
                 << ", Trieu Chung: " << it->Notes << endl;
        } else {
            cout << "Khong tim thay benh nhan co ten: " << ten << endl;
        }
    }

    void deleteBenhNhan(const string& name) {
        auto it = remove_if(danhSachBenhNhan.begin(), danhSachBenhNhan.end(), [&name](const BenhNhan& bn) {
            return bn.name == name;
        });

        if (it != danhSachBenhNhan.end()) {
            danhSachBenhNhan.erase(it, danhSachBenhNhan.end());
            cout << "Da xoa benh nhan: " << name << endl;
        } else {
            cout << "Khong tim thay benh nhan co ten: " << name << endl;
        }
    }

    void chinhSuaBenhNhan(const string& name) {
        auto it = find_if(danhSachBenhNhan.begin(), danhSachBenhNhan.end(), [&name](BenhNhan& bn) {
            return bn.name == name;
        });

        if (it != danhSachBenhNhan.end()) {
            cout << "Nhap tuoi moi: ";
            cin >> it->age;
            cin.ignore(); // Để bỏ qua ký tự newline
            cout << "Nhap trieu chung moi: ";
            getline(cin, it->trieuChung);
            cout << "Da cap nhat thong tin cho benh nhan: " << name << endl;
        } else {
            cout << "Khong tim thay benh nhan co ten: " << name << endl;
        }
    }

    void luuDuLieu(const string& tenFile) {
        ofstream outFile(tenFile);
        for (const auto& bn : danhSachBenhNhan) {
            outFile << bn.name << "," << bn.age << "," << bn.Notes << endl;
        }
        outFile.close();
        cout << "Du lieu da duoc luu vao file: " << tenFile << endl;
    }

    void taiDuLieu(const string& tenFile) {
        ifstream inFile(tenFile);
        if (!inFile) {
            cout << "Khong the mo file: " << tenFile << endl;
            return;
        }

        danhSachBenhNhan.clear();
        string line;
        while (getline(inFile, line)) {
            size_t pos1 = line.find(',');
            size_t pos2 = line.find(',', pos1 + 1);
            if (pos1 != string::npos && pos2 != string::npos) {
                BenhNhan bn;
                bn.name = line.substr(0, pos1);
                bn.age = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
                bn.Notes = line.substr(pos2 + 1);
                danhSachBenhNhan.push_back(bn);
            }
        }
        inFile.close();
        cout << "Du lieu da duoc tai tu file: " << tenFile << endl;
    }

    void sapXepBenhNhan() {
        sort(danhSachBenhNhan.begin(), danhSachBenhNhan.end(), [](const BenhNhan& a, const BenhNhan& b) {
            return a.name < b.name;
        });
        cout << "Da sap xep danh sach benh nhan theo ten." << endl;
    }

    void xuatDuLieuCSV(const string& tenFile) {
        ofstream outFile(tenFile);
        if (!outFile) {
            cout << "Khong the mo file de xuat: " << tenFile << endl;
            return;
        }

        for (const auto& bn : danhSachBenhNhan) {
            outFile << bn.name << "," << bn.age << "," << bn.trieuChung << endl;
        }
        outFile.close();
        cout << "Du lieu da duoc xuat ra file: " << tenFile << endl;
    }
};