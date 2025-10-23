document.getElementById('alarmForm').addEventListener('submit', function(event) {
    event.preventDefault();

    let hours = parseInt(document.getElementById('hours').value);
    let minutes = parseInt(document.getElementById('minutes').value);
    let seconds = parseInt(document.getElementById('seconds').value);

    if (isNaN(hours) || isNaN(minutes) || isNaN(seconds) || hours < 0 || minutes < 0 || seconds < 0) {
        document.getElementById('message').textContent = "Per favore, inserisci valori validi!";
        return;
    }

    let alarmTime = new Date();
    alarmTime.setHours(hours);
    alarmTime.setMinutes(minutes);
    alarmTime.setSeconds(seconds);
    alarmTime.setMilliseconds(0);

    let currentTime = new Date();
    let timeDifference = alarmTime - currentTime;

    if (timeDifference <= 0) {
        document.getElementById('message').textContent = "La sveglia deve essere impostata in un orario futuro!";
        return;
    }

    document.getElementById('message').textContent = `Sveglia impostata per ${alarmTime.toLocaleTimeString()}`;

    setTimeout(function() {
        alert("E' il momento di svegliarsi!");
        
    }, timeDifference);
});
