const product2 = {
        name: 'shirt',
        rating: {
          stars: 4.5,
          count: 87
        },

        fun: function function1() {
          console.log('function inside object');
        }
     };
      //console.log(product2);
      console.log(product2.name);
      console.log(product2['name']);
      console.log(product2['deliver-time']);
      console.log(product2.rating.count);
      product2.fun();
      console.log(JSON.stringify(product2)); //js object -> JSON
      
      const jsonString = JSON.stringify(product2);
      console.log(JSON.parse(jsonString)); //json to js object