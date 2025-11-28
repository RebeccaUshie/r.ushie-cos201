



int max(int num1, int num2){
    int max_numb;
    if(num1> num2){
        max_numb = num1;
    }
    else{
        max_numb = num2;
    }
    return max_numb
}


int main(){
    int result= max(10, 15);
    cout<<"The max number is "<<result;
    int result1 = max(100,59);
    cout<<"The max number is "<<result1;
    int result2 = max(1, 105);
    cout<<"The max number is "<<result2;
}