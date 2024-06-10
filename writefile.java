import java.io.File;
import java.io.FileOutputStream;

import java.io.*;

class writefile {
    public static void main(String arg[]) throws Exception {
        FileOutputStream fobj = new FileOutputStream("marvellous");

        String Data = "Marvellous Infosystem pune";

        byte bdata[] = Data.getBytes();

        fobj.write(bdata);
        fobj.close();

    }

}
