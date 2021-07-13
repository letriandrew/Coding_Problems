class Solution {
public:
   	int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int studentcount = students.size();
        int circlestu = 0;
        int squarestu = 0;
        for(int i = 0; i < students.size(); i++)
        {
            if(students[i] == 0)
                circlestu++;
            else
                squarestu++;
        }
        for(int i = 0; i < students.size(); i++)
        {
            if(sandwiches[i] == 0)
            {
                if(circlestu > 0)
                {
                    circlestu--;
                    studentcount--;
                }
                else
                    return studentcount;
            }
            else
            {
                if(squarestu > 0)
                {
                    squarestu--;
                    studentcount--;
                }
                else
                    return studentcount;
            }
        }
        return studentcount;
    }
};
