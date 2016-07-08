import copy

class Solution:

    
    # @param strs: A list of strings
    # @return: A list of strings
    def anagrams(self, strs):
        # write your code here
        str1=copy.deepcopy(strs)

        def hashLize(s):
            dicts1= dict()
            for i in range(26):
                dicts1[chr(i+ord("a"))]=0
                

            for j in s:
                if j in dicts1.keys():
                    dicts1[j]+=1               

            return dicts1

        def sortLize(s):
            s1=list(s)
            s1.sort()

            return "".join(s1)


        

        check_dict=dict()


        for i in range(len(strs)):
            str_s1=sortLize(strs[i])
            if str_s1 in check_dict.keys():
                check_dict[str_s1].append(strs[i])
            else:
                check_dict[str_s1]=[]
                check_dict[str_s1].append(strs[i])


        str_rt=[]

        for i in check_dict.keys():
            if (len(check_dict[i]) > 1):
                str_rt.extend(check_dict[i])

        return str_rt

        #Total Runtime: 835 ms



        # for i in range(len(strs)):
        #   str1[i]=hashLize(strs[i])

        #   str_rt=[]
        # flag = [0 for i in range(len(strs))]

        # for i in range(len(strs)):
        #   if flag[i]:
        #       continue
            
        #   for j in range(i+1,len(strs)):
        #       if i==j:
        #           continue
        #       if flag[j]:
        #           continue
        #       if str1[i]==str1[j]:
                    
        #           if flag[i]==0:
        #               str_rt.append(strs[i])
        #           flag[i] = 1
        #           flag[j] = 1
        #           str_rt.append(strs[j])                  
                    

