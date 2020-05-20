class Document {
    static int count =1;
    String name;
    Document(){
        this("document"+ count++);
    }
    Document(String name){
        this.name = name;
        System.out.println("file "+ this.name+" created.");
    }
}

class DocumentTest{
    public static void main(String[] args){
        Document d1 = new Document();
        Document d2 = new Document("java");
        Document d3 = new Document();
        Document d4 = new Document();

    }
}