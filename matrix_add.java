

	public static void main(String[] args) {
		int N;
		Scanner ob = new Scanner(System.in);
		System.out.println("enter the number: ");
		N=ob.nextInt();
				

		int A[][]=new int[N][N];
		int B[][]=new int[N][N];
		int C[][]=new int[N][N];
		System.out.println("enter elements of A ");
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				A[i][j]=ob.nextInt();
			}
			
		}
		System.out.println("enter elements of B ");
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				B[i][j]=ob.nextInt();
			}
			
		}
        System.out.println("addition of A & B is ");
        for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
			}
		}
        for(int i=0;i<N;i++)
        {
        	for(int j=0;j<N;j++)
        	{
        		System.out.print(" "+C[i][j]);
        	}
        	System.out.println();
        }
	}

}
