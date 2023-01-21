import java.util.Scanner;

class Node {
    private int data;
    private Node next;

    public Node() {
        data = 0;
        next = null;
    }

    public Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }

    public int getData() {
        return data;
    }

    public void setData(int data) {
        this.data = data;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }
}

class LinkedList {
    private Node start;
    int size;

    public LinkedList() {
        start = null;
        size = 0;
    }

    public boolean isEmpty() {
        return start == null;
    }

    public int getListSize() {
        return size;
    }

    public void viewList() {
        Node t;

        if (isEmpty()) {
            System.out.println("list is Empty");
        }

        t = start;

        for (int i = 1; i <= size; i++) {
            System.out.print(t.getData());
            System.out.print(" ");
            t = t.getNext();
        }
        System.out.println("");
    }

    public void insertAtFirst(int data) {
        Node n = new Node();

        n.setData(data);
        n.setNext(start);
        start = n;
        size++;
    }

    public void insertAtLast(int data) {
        Node n = new Node();
        Node t;

        n.setData(data);
        t = start;

        if (t == null) {
            start = n;
        } else {
            while (t.getNext() != null) {
                t = t.getNext();
            }
            t.setNext(n);
            size++;
        }

    }

    public void insertAtPos(int pos, int data) {
        Node n = new Node();
        Node t, s;
        int i = 0;
        n.setData(data);

        t = start;
        s = start.getNext();

        if (pos == 0) {
            insertAtFirst(data);
        } else if (pos == size + 1) {
            insertAtLast(data);
        } else if (pos > 0 && pos <= size) {
            while (i != pos - 1) {
                t = t.getNext();
                s = s.getNext();
                i++;
            }

            t.setNext(n);
            n.setNext(s);
            size++;

        } else {
            System.out.println("Insertion is not possible at position " + pos);
        }

    }

    public void deleteAtFirst() {
        if (isEmpty()) {
            System.out.println("list is already Empty!");
        } else {
            start = start.getNext();
            size--;
        }
    }

    public void deleteAtLast() {
        Node t;
        t = start;
        if (isEmpty()) {
            System.out.println("list is already Empty!");
        } else if (size == 1) {
            start = null;
            size--;
        } else {
            int i = 0;
            while (i != size - 1) {
                t = t.getNext();
                i++;
            }

            t.setNext(null);
            size--;
        }
    }

    public void deleteAtPos(int pos) {
        Node t, s;
        t = start;
        s = start.getNext();
        if(start == null){
            System.out.println("List is Empty!");
        }
        else if (pos == 0) {
            deleteAtFirst();
        } else if (pos == size - 1) {
            deleteAtLast();
        } else if (pos > 0 && pos <= size) {
            int i = 0;
            while (i != pos - 1) {
                t = t.getNext();
                s = s.getNext();
                i++;
            }

            t.setNext(s.getNext());
            size--;
        }
    }

}

public class tut_03_LinkedList_Test {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        LinkedList l = new LinkedList();
        int choice, data, pos;
        do {
            System.out.println("");
            System.out.println("1. Add item to the list at start");
            System.out.println("2. Add item to the list at last");
            System.out.println("3. Add item to the list at position");
            System.out.println("4. Delete first item from the list");
            System.out.println("5. Delete last item from the list");
            System.out.println("6. Delete item from the list at the given position");
            System.out.println("7. View list");
            System.out.println("8. Exit");
            System.out.println("Enter your choice");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter data:");
                    data = sc.nextInt();
                    l.insertAtFirst(data);
                    break;
                case 2:
                    System.out.println("Enter data:");
                    data = sc.nextInt();
                    l.insertAtLast(data);
                    break;
                case 3:
                    System.out.println("Enter position:");
                    pos = sc.nextInt();
                    System.out.println("Enter data:");
                    data = sc.nextInt();
                    l.insertAtPos(pos, data);
                    break;
                case 4:
                    l.deleteAtFirst();
                    break;
                case 5:
                    l.deleteAtLast();
                    break;
                case 6:
                    System.out.println("Enter position:");
                    pos = sc.nextInt();
                    l.deleteAtPos(pos);
                    break;
                case 7:
                    System.out.println("List elements:");
                    l.viewList();
                    break;
                case 8:
                    System.out.println("Thanks for visiting our software...!");
                    System.out.println("Anytime welcome...");
                    System.exit(0);
                    break;
                default:
                    System.err.println("Inavlid Choice");
            }
        } while (choice != 8);

        sc.close();

    }
}
