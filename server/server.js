const server = require('http').createServer()
const io = require('socket.io')(server,{
    cors: {
        origin: 'http://localhost:8081',
        methods: ["GET","POST"]
    }
});
io.on("connection", (socket) => {
    socket.emit("hello", "server recived");
    socket.on("play",index =>
    {
        console.log("Recived the index",index)
        socket.broadcast.emit("play",index)
    })
  });
  server.listen(3001)

// const express = require('express')
// const http = require('http')
// const app = express();
// const server = http.createServer(app);
// const socket = require("socket.io");
// const io = socket(server);

// io.on("connection", (socket) => {
//     socket.emit("hello", "world");
//   });

// server.listen(8002, ()=> console.log("running the server"))

