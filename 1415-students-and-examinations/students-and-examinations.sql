# Write your MySQL query statement below
Select st.student_id,st.student_name,su.subject_name,COUNT(ex.subject_name) as attended_exams
From (Students st cross join Subjects su)   left join Examinations ex
on st.student_id=ex.student_id AND su.subject_name=ex.subject_name
group by su.subject_name,st.student_id,st.student_name
order by st.student_id,su.subject_name