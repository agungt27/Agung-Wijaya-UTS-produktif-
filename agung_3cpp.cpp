
     cout << "\n\n\t\t - Rumus Matematika lingkaran - \n";
     
           lingkaran :
           cout << "\n\n\t\t - Luas Lingkaran - \n";
           cout << "\t==================================== \n\n";
    
           cout << "Masukan jari-jari lingkaran : ";
           cin >> r;
    
           cout << "\n";
           llingkaran = phi*r*r;
           cout << "Rumus : L = phi * r * r \n";
           cout << "L = 3.14 * " << r << " * " << r << "\n";
           cout << "L = " << llingkaran;
           cout << "\n\n";

           if(status =='y' || status =='Y')
                     goto lingkaran;
           else if (status == 'm' || status == 'M')
                     goto menu;
           else
                     goto end ;
                     
     