import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
    home: Scaffold(
      appBar: AppBar(
        title: Text('Kapi Bhale'),
        backgroundColor: Colors.black26,
        centerTitle: true,
      ), 
      body: Center(
        child: Card(
          elevation: 50,
          shadowColor: Colors.black,
          color: Colors.black12,
          child: SizedBox(
            height: 480,
            width: 350,
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                children: [
                  CircleAvatar(
                    backgroundColor: Colors.black12,
                    radius: 108,
                    child: CircleAvatar(
                      backgroundImage: NetworkImage(
                          "https://media-exp1.licdn.com/dms/image/C5603AQHTyzDKXw2V4w/profile-displayphoto-shrink_800_800/0/1589215868321?e=1637798400&v=beta&t=xSaAs05NKXLpZS2iUgDfgo-xU2UgOBEP1p00JrtaO9I"), //NetworkImage
                      radius: 100,
                    ), //CircleAvatar
                  ), 
                  SizedBox(
                    height: 10,
                  ),
                  Text(
                    'Kapil Bhale',
                    style: TextStyle(
                      fontSize: 30,
                      color: Colors.white,
                      fontWeight: FontWeight.w500,
                    ), //Textstyle
                  ), //Text
                  SizedBox(
                    height: 10,
                  ), 
                  Text(
                    'Discipline is just choosing between what you want now and what you want most.',
                    style: TextStyle(
                      fontSize: 20,
                      color: Colors.brown,
                      fontWeight: FontWeight.w500,
                    ),
                  ),
                  SizedBox(
                    height: 10,
                  ),
                  ButtonBar(
                    alignment:MainAxisAlignment.start,
                    children: [
                      RaisedButton(  
                        child: const Text('Follow'),  
                        onPressed: () {/* ... */},  
                      ),  
                      RaisedButton(  
                        child: const Text('Like'),  
                        onPressed: () {/* ... */},  
                      ),  
                    ],
                  ),
                ],
                  
              )
            )
          )
        )
      ),//AppBar
    ), //Scaffold
  ); //MaterialApp
  }
}
// 0FFC8E6C9