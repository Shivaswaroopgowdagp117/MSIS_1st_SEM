import javax.swing.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        
        FileInputStream fis = new FileInputStream("2.binvox");
        
        Voxels m1 = readAs3DArray(fis);

        
        int w = 256, h = 256;
        int[][] flag = new int[w][h];

        
            for (int j = 1; j < h; j++) {
                int maxGrayscale = 0; 
                for (int k = 1; k < m1.getDim()[2]; k++) { 
                    if (m1.getData()[i * m1.getDim()[1] * m1.getDim()[2] + j * m1.getDim()[2] + k] > 0) { 
                        maxGrayscale = Math.max(maxGrayscale, k); 
                    }
                }
                flag[i][j] = maxGrayscale; 
            }
        }

        
        JFrame frame = new JFrame("3D Grayscale Segmentation");
        
        GFG app = new GFG(flag); 
        
        app.getAllSegments(); 
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(app);
        frame.pack();
        frame.setVisible(true);
        
    }

    private static Voxels readAs3DArray(InputStream inputStream) throws IOException {
        BufferedInputStream bis = new BufferedInputStream(inputStream);
        
		
		byte[] headerBytes = new byte[1024];
		bis.read(headerBytes);
		
		String headerString = new String(headerBytes).trim();
		
		if (!headerString.startsWith("#binvox")) throw new IOException("Not a binvox file");

		String[] lines = headerString.split("\n");
		String[] dimStrs = lines[1].trim().split(" ");
		int[] dim = {Integer.parseInt(dimStrs[1]), Integer.parseInt(dimStrs[2]), Integer.parseInt(dimStrs[3])};
		
		float[] translate = new float[]{Float.parseFloat(lines[2].trim().split(" ")[1]),
                                         Float.parseFloat(lines[2].trim().split(" ")[2]),
                                         Float.parseFloat(lines[2].trim().split(" ")[3])};
		
		float scale = Float.parseFloat(lines[3].trim().split(" ")[1]);

		byte[] rawDataBytes = bis.readAllBytes();
		
		int[] rawDataInts = new int[dim[0] * dim[1] * dim[2]];
		
		for (int i=0;i<rawDataInts.length;i++){
			rawDataInts[i]=Byte.toUnsignedInt(rawDataBytes[i]); 
		}

	    return new Voxels(rawDataInts,dim,translate,scale,"xyz");
   }  
}