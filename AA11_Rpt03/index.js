var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
router.get('/aa11', function(req, res, next) {
  res.render('aa11', { title: 'Express App', id: 'AA11', name: 'Redwoods' });
});



module.exports = router;
