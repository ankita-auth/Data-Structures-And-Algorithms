class array{
    public static void main(String[] args){
        int[] arr=new int[5];
        arr[0]=1;
        arr[1]=6;
        arr[2]=7;
        arr[3]=9;
        arr[4]=1;
        //System.out.println(arr[8]);//runtime error(Inaccessible Memory)
        System.out.println(arr.length);
        int [] array={6,5,2,8};
        
        //---------------------------X-------------------------------
        //2d array
        int[][] a={{6,5},{7,8,9},{7,4,3},{8}};
        int []zeroIndex=a[0]; //{6,5}
        System.out.println(zeroIndex[1]);
        System.out.println(a[0][1]);
        System.out.println(a);


        
    }
}