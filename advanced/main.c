#include <stdio.h>

void Helloworld()
{
    printf("Hello, World!\n");
}
void Counting_sort()
{
    int nums[5]={7,1,2,0,7};
    int newnums[8]={0};
    int num_len= sizeof(nums);
    int newnums_len= sizeof(newnums);
    //printf("%d %d\n",num_len,newnums_len);
    int len = sizeof(nums) / sizeof(nums[0]);
    //printf("%d\n",len);
    for(int i = 0; i < len; i++){
        // 取出待排序数组当前值
        int index = nums[i];
        //printf("%d\n",index);
        // 将待排序数组当前值作为排序数组索引
        // 将用于排序数组对应索引原有值+1
        newnums[index] = newnums[index] +1;
        //printf("%d\n",newnums[index]);
    }
    int len2 = sizeof(newnums) / sizeof(newnums[0]);
    // 输出排序数组索引, 就是排序之后结果
    for(int i = 0; i < len2; i++){
        for(int j = 0; j < newnums[i]; j++){
            printf("%i\n", i);
        }
    }

}
int find_max()
{
    int nums[5]={7,1,2,11111111,11111};
    int len_nums= sizeof(nums)/sizeof(nums[0]);
    int max;
    printf("%d\n",len_nums);
    for (int i =0;i<len_nums;i++)
    {
        if(nums[i]>=max){
            max=nums[i];
            printf("%d\n",i);
        }
    }
    printf("%d",max);
}

int main() {
    //Helloworld();
    //Counting_sort();
    find_max();
    return 0;
}
