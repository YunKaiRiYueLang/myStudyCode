void main(List<String> args) {
  var person = new Person();
  var v = new Person.mynow(); //触发命名构造函数
  print(person.age);
  person.getInfo();
  person.setUserInfo(110);
  person.getInfo();
  // person._id;
}

//可以将类抽离出去放在一个文件夹里
// 在项目的根目录创建一个文件夹 lib
// 在lib文件夹中创建一个文件 xxx.dart内容如下
// class Person {
//   //我是默认的构造函数
//   Person() {
//     print('我是默认的构造函数');
//   }
//   // 命名构造函数
//   Person.mynow() {
//     print('我是命名构造函数');
//   }
// }
// 在需要的某个文件中引入
// import 'lib/xxx.dart';
// void main() {
// 实例化的时候，会默认构造自动触发
// Person p = new Person(); // 等价 var p=new Person
// Person v = new Person.mynow(); // 触发命名构造函数
// }

//可以将类抽离出去放在一个文件夹里

class Person {
  int _id = 123;
  Person() {
    //实例化的时候自动触发
    print('默认构造函数');
  }
  //默认构造函数只能由一个。构造函数只能有一个，不能像c++那样，构造函数可以重载
  //强行写，编译不过
  // Person(String name, int age) {
  //   this.name = name;
  //   this.age = age;
  // }
  // Person(this.name, this.age);
  //默认构造函数只能由一个。构造函数只能有一个，不能像c++那样，构造函数可以重载
  Person.mynow() {
    print('命名构造函数');
  }
  String name = '张三';
  int age = 19;
  void getInfo() {
    //打印信息
    print('${this.name}=====${this.age}');
  }

  setUserInfo(int age) {
    //设置年龄，void事实上可省略
    this.age = age;
  }

  getid() {
    return _id;
  }
}
