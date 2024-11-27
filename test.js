const session = require('express-session');
app.use(session({
  secret: 'secretKey',
  resave: false,
  saveUninitialized: true
}));
