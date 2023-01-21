public class tut_00_StringBuilder{
    public static void main(String[] args) {

        /* 
        StringBuilder in Java:

        - String in java is immutable. It means that once string object is created its data OR state cant be changed but a new 
          String object is created.

        - Here, Normally "str" variable is created into the stack and their object is created into the heap. when "sony" is stored
          then it creates one object in heap, after that when concat new string "TV" then it creates another object in heap. If programmer creates any large size program and makes many changes with string then again it creates new object in heap for all changes.
          
        - Due to this situation in memory, it may be lead to delay in executing the program. Program execution is done in several
          seconds so it will be low performance and dull user experience.

        - To overcome this situation, the StringBuilder class was introduced.

        - StringBuilder : It is used to create mutable string. The StringBuilder class has many in-built methods, but the main 
          difference happened in memory.

        - Now, it creates the "str" variable in stack and creates object into the heap. When any changes in string is reflected
          then it does not create a new object rather it makes changes in that existing object OR created object.

        */

        String str = "sony";
        // System.out.println(str);

        // //cannot directly changed but concat
        // str = str.concat("TV");
        // System.out.println(str);

        //How to use string builder
        StringBuffer sb = new StringBuffer(str);
        System.out.println(sb);

        //concat at the end of the string
        System.out.println(sb.append("TV"));

        //char at index 0
        System.out.println(sb.charAt(0));

        //set char at index
        sb.setCharAt(0, 'T');
        System.out.println(sb);

        //insert at index position
        sb.insert(0, "Digital");
        System.out.println(sb);

        //delete Tony from the string
        sb.delete(7, 11);
        System.out.println(sb);

        //length
        System.out.println(sb.length());

        //Que: Reverse the string.
        //example: Hello --> olleh, snjb --> bjns
        // System.out.println(sb.reverse());

        //custom logic
        StringBuilder st = new StringBuilder("Hello");
        for(int i=0; i<st.length()/2; i++){
            int front = i;
            int back = st.length() - 1 - i; //5-1-0 = 4

            //select the characters at front and back
            char frontChar = st.charAt(front);
            char backChar = st.charAt(back);

            //replace the characters
            st.setCharAt(front, backChar);
            st.setCharAt(back, frontChar);
        }
        
        System.out.println(st);
        
    }
}