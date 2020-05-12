/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author RavishanF
 */

class Calc{
    int num1;  //know somthing
    int num2;   //know somthing
    double result; //know somthing
    
    public void add(){  //does somthing
        result = num1 + num2;
    }
    public void substract(){  //does somthing
        result = num1 - num2;
    }
    public void multiply(){  //does somthing
        result = num1 * num2;
    }
    public void divide(){  //does somthing
        result = (double) num1 / num2;
    }
}
public class MyCode {
    public static void main(String args[]){
        Calc obj = new Calc();     //know somthing and does something
        obj.num1 = 3;
        obj.num2 = 5;
        obj.add();
        System.out.println(obj.result);
        obj.substract();
        System.out.println(obj.result);
        obj.multiply();
        System.out.println(obj.result);
        obj.divide();
        System.out.println(obj.result);
        
    }
    
    
}

