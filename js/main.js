// console.log(document.getElementById('header-title'));
//var header = document.getElementById('main-header');
//header.style.borderBottom = 'solid 3px #000';
// Get elements by class name
var items = document.getElementsByClassName('list-group-item');
console.log(items);
for(var i = 0; i > items.length; i++)
    {
        items[i].style.backgroundColor = '#f4f4f4';
    }