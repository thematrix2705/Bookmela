const login = document.getElementById("login-page");
const login_ahref = document.getElementById("login-src")

onload = fetch("./Book details.csv").then(res => {
    return res.text();
}).then(data => {
     let result = data.split(/\r?\n|\r/).map(e => {
        return e.split(",")
     })
    result.forEach(r => {
       console.log(r[5])
    })
    console.log(result)
})



