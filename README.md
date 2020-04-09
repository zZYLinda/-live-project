# -live-project<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Document</title>
    <style type="text/css">
        *{
            margin: 0;
            padding: 0;
        }
        div{
            width: 80%;
            margin: 10px auto;
            text-align: center;
        }
        table{
            margin-top: 30px;
            border-collapse: collapse;
        }
        tr td,tr th{
            border: 1px solid gray;
            width: 200px;
            line-height: 35px;
            text-align: center;
        }
    </style>
</head>
<body>
<div>
    <label for="">学号：</label><input type="text" id="txt1">
    <label for="">姓名：</label><input type="text" id="txt2">
    <label for="" >登记时间：</label><input type="text" id="txt3">
    <button id="btn">添加</button>
    <table>
        <tbody id="body">
        <tr>
            <th>学号</th>
            <th>姓名</th>
            <th>登记时间</th>
            <th>操作</th>
        </tr>
        </tbody>
    </table>
</div>
<script type="text/javascript">
    var id = document.getElementById('txt1');
    var xname = document.getElementById('txt2');
    var address = document.getElementById('txt3');
    var btn = document.getElementById('btn');
    var tbody = document.getElementById('body');
    btn.onclick = function () {
        var tr = createTr();
        tbody.appendChild(tr);
    };
    function createTr() {
        var tr = document.createElement('tr');
        var td1 = createCell(id.value,false);
        var td2 = createCell(xname.value,false);
        var td3 = createCell(address.value,false);
        var td4 = createCell("删除",true);
        tr.appendChild(td1);
        tr.appendChild(td2);
        tr.appendChild(td3);
        tr.appendChild(td4);
        return tr;
    }
    function createCell(value,isLink) {
        var cell = document.createElement('td');
        if(isLink){
            var link = document.createElement('a');
            link.href = '#';
            link.innerHTML = value;
            cell.appendChild(link);
            link.onclick = function () {
                var tr = this.parentNode.parentNode;
                tr.parentNode.removeChild(tr);
            }
        }else{
            cell.innerHTML = value;
        }

        return cell;
    }
</script>
</body>
</html>
