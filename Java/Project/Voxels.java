public class Voxels {
    private int[] data;        
    private int[] dim;        
    private float[] translate; 
    private float scale;       
    private String axisOrder;  

    public Voxels(int[] data, int[] dim, float[] translate, float scale, String axisOrder) {
        this.data = data;
        this.dim = dim;
        this.translate = translate;
        this.scale = scale;
        this.axisOrder = axisOrder;
    }

    public int[] getData() {
        return data;
    }

    public int[] getDim() {
        return dim;
    }
}