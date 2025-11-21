void input3DArray(int arr[X][Y][Z]) {
    printf("Enter elements of the 3D array:\n");
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

void print3DArray(int arr[X][Y][Z]) {
    printf("3D Array Elements:\n");
    for (int i = 0; i < X; i++) {
        printf("Slice %d:\n", i);
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                printf("%d ", arr[i][j][k])
void sum3DArray(int arr1[X][Y][Z], int arr2[X][Y][Z], int result[X][Y][Z]) {
void sum3DArray(int arr1[X][Y][Z], int arr2[X][Y][Z], int result[X][Y][Z]) {
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                result[i][j][k] = arr1[i][j][k] + arr2[i][j][k];
int determinant(int matrix[N][N], int n) {
    int det = 0;
    if (n == 1)
        return matrix[0][0];
    
    int temp[N][N];
    int sign = 1;
    
    for (int f = 0; f < n; f++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == f)
                    continue;
                temp[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return det;
}

int main() {
    srand(time(0));
    int A[N][N], B[N][N], result[N][N];
    
    printf("Matrix A:\n");
    generateMatrix(A);
    printMatrix(A);
    
    printf("\nMatrix B:\n");
    generateMatrix(B);