echo off
cls
set /p command="Please enter command: "
set /p time="Please enter time: "
set /p log="Please enter log: "
sleeper %command% %time% %log%