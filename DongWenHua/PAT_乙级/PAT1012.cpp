 #include<stdio.h>   
int main(){  
    int A1=0,A1t=0,A2=0,A2t=0,A3=0,A3t=0,A4t=0,A5=0,A5t=0,n;  
    double A4=0;  
    scanf("%d",&n);  
    int q = -1;  
    for(int i=0 ;i<n ;i++){  
        int x;  
        scanf("%d",&x);  
        if(x%10==0){  
            A1t++;  
            A1 += x;  
        }  
        if(x%5==1){  
            A2t++;  
            q = -q;  
            A2 += x*q;  
        }  
        if(x%5==2){  
            A3++;  
        }  
        if(x%5==3){  
            A4t ++;  
            A4 += x;  
        }  
        if(x%5==4){  
            A5t++;  
            if(x>A5){  
                A5 = x;  
            }  
        }  
  
    }  
    if(A1t!=0){  
        printf("%d ",A1);  
    }else{  
        printf("%s ","N");  
    }  
  
    if(A2t!=0){  
        printf("%d ",A2);  
    }else{  
        printf("%s ","N");  
    }  
  
    if(A3!=0){  
        printf("%d ",A3);  
    }else{  
        printf("%s ","N");  
    }  
  
    if(A4t!=0){  
        printf("%.1f ",A4/A4t);  
    }else{  
        printf("%s ","N");  
    }  
  
    if(A5t!=0){  
        printf("%d\n",A5);  
    }else{  
        printf("%s\n","N");  
    }  
    return 0;  
}  
