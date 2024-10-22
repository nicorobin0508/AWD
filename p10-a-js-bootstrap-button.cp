index.html

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bootstrap Button Demo</title>
    <!-- Bootstrap CSS -->
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
    <!-- Optional custom CSS -->
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div class="container mt-5">
        <h1 class="text-center">Bootstrap Button Demo</h1>
        <div class="text-center mt-4">
            <h4>Basic Buttons</h4>
            <button type="button" class="btn btn-primary">Primary</button>
            <button type="button" class="btn btn-secondary">Secondary</button>
            <button type="button" class="btn btn-success">Success</button>
            <button type="button" class="btn btn-danger">Danger</button>
            <button type="button" class="btn btn-warning">Warning</button>
            <button type="button" class="btn btn-info">Info</button>
            <button type="button" class="btn btn-light">Light</button>
            <button type="button" class="btn btn-dark">Dark</button>
            <button type="button" class="btn btn-link">Link</button>
        </div>

        <div class="text-center mt-4">
            <h4>Button Sizes</h4>
            <button type="button" class="btn btn-primary btn-lg">Large Button</button>
            <button type="button" class="btn btn-primary">Normal Button</button>
            <button type="button" class="btn btn-primary btn-sm">Small Button</button>
        </div>

        <div class="text-center mt-4">
            <h4>Button States</h4>
            <button type="button" class="btn btn-primary" id="toggleButton">Toggle Me!</button>
        </div>
    </div>

    <!-- Bootstrap JS and dependencies -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
    <!-- Optional custom JavaScript -->
    <script src="script.js"></script>
</body>
</html>
