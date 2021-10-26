Problem Link:
https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

My Sumbission:
https://practice.geeksforgeeks.org/viewSol.php?subId=9981056c60a2053434be3b0dba16792b&pid=701343&user=user_un1o



Code:

 vector<long long> nextLargerElement(vector<long long> arr, int n)
 {
       stack<long long>s;
       vector<long long>v;
       for(int i=n-1;i>=0;i--)
       {
           if(i==n-1)
           {
               v.push_back(-1);
           }
           else{
               while(s.size()>0)
               {
                   if(s.top()<=arr[i])
                   {
                       s.pop();
                   }
                   else{
                       break;
                   }
               }
               if(s.size()==0)
               {
                   v.push_back(-1);
               }
               else{
                   v.push_back(s.top());
               }
           }
           s.push(arr[i]);
           
       }
       reverse(v.begin(),v.end());
       return v;
    }
