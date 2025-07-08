#include<stdio.h>
#include<stdbool.h>

#define MAX_NUM 10000

bool solution(int nums[], int size){
    bool visited[MAX_NUM] = {false};
    for(int i = 0; i < size; i++){
        if(nums[i]>=0 && nums[i] < MAX_NUM){
            if(visited[nums[i]]){
                return true;
            }
            visited[nums[i]] = true;
        }
    }
    return false;

}


int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    printf("%s\n", solution(nums, 5) ? "true" : "false");
}