import java.io.*;

class CreaterFile {
    public static void main(String agr[]) throws Exception {
        File fobj = new File("marvellous");

        if (fobj.createNewFile()) {
            System.out.println("File Created Succesfully");
        } else {
            System.out.println("Unable to create the file");
        }

    }
}