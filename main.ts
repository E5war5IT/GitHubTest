
  /*
  vk = "https://vk.com",
  youtube = "https://youtube.com",
  telegram = "https://telegram.com"
  */
  
/*
type token = {
  token: string,
  id: number | string,
  sugar: number | string
}

type url<string> = {
  server , web, domen
}
/*
interface links {
  vk : string = {
    server: "https",
    web: "vk",
    domen: "com"
  }
  
  telegram : string = {
    server: "https",
    web: "telegram",
    domen: "com"
  }
  
  youtube : string = {
    server: "https",
    web: "youtube",
    domen: "com"
  }
  
  
}



function win<T>(arg: T) : void {
  console.log(arg)
}


*/


function getArray<T>(items : T[] ) : T[] {
    return new Array<T>().concat(items);
}


let myNumArr = getArray<number>([100, 200, 300]);
let myStrArr = getArray<string>(["Hello", "World"]);

myNumArr.push(400); // OK
myStrArr.push("Hello TypeScript"); // OK


