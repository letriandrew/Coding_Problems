class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> studentsqueue;
        int sandwichpos = 0;
        int returncounter = 0;
        for(int i = 0; i < students.size(); i++)
        {
            studentsqueue.push(students[i]);
        }
        while(!studentsqueue.empty())
        {
            if(sandwichpos == sandwiches.size())
            {
                return returncounter;
            }
            if(studentsqueue.front() != sandwiches[sandwichpos])
            {
                int back = studentsqueue.front();
                studentsqueue.pop();
                studentsqueue.push(back);
                sandwichpos++;
            }
            else
            {
                returncounter++;
                sandwiches.erase(sandwiches.begin());
                sandwichpos = 0;
                studentsqueue.pop();
            }
        }
        return returncounter;
    }
};
