function showAlertJS(mes) {
    alert(mes);
}


function enableCustomJavaScript() {
    const observer = new MutationObserver(mutationList =>
        mutationList.filter(m => m.type === '.sidebar .nav-link').forEach(m => {
            m.addedNodes.forEach(doSomething);
        }));
    observer.observe(target, { childList: true, subtree: true });
}




// Function to handle clicks on nav links
function handleNavClick(element) {
    let nextEl = element.nextElementSibling;
    let parentEl = element.parentElement;
    if (nextEl) {
        let collapsableEl = new bootstrap.Collapse(nextEl);
        if (nextEl.classList.contains('show')) {
            collapsableEl.hide();
        } else {
            collapsableEl.show();
            var opened_submenu = parentEl.parentElement.querySelector('.submenu.show');
            if (opened_submenu) {
                new bootstrap.Collapse(opened_submenu);
            }
        }
    }
}

// Function to set up a MutationObserver
function setupMutationObserver() {
    const observer = new MutationObserver(function (mutationsList) {
        for (let mutation of mutationsList) {
            if (mutation.type === 'childList' && mutation.addedNodes.length > 0) {
                // Handle newly added nodes (e.g., new nav links)
                mutation.addedNodes.forEach(function (node) {
                    if (node.nodeType === Node.ELEMENT_NODE && node.classList.contains('nav-link')) {
                        node.addEventListener('click', function (e) {
                            handleNavClick(node);
                        });
                    }
                });
            }
        }
    });

    // Configure the observer to watch for changes in the 'sidebar' element
    observer.observe(document.querySelector('.sidebar'), {
        childList: true,  // Watch for changes to the child nodes (e.g., adding new nav links)
    });
}

// Add initial click event listeners for existing nav links
document.addEventListener("DOMContentLoaded", function () {
    document.querySelectorAll('.sidebar .nav-link').forEach(function (element) {
        element.addEventListener('click', function (e) {
            handleNavClick(element);
        });
    });

    // Set up the MutationObserver
    setupMutationObserver();
});





// Add a script section in your index.html or import it using _Imports.razor
function initializeMap(apiKey) {
    // Initialize the map with the provided API key
    var map = new google.maps.Map(document.getElementById('map'), {
        center: { lat: -34.397, lng: 150.644 },
        zoom: 8
    });

    // You can add markers, polygons, etc. as needed
    var marker = new google.maps.Marker({
        position: { lat: -34.397, lng: 150.644 },
        map: map,
        title: 'Hello World!'
    });
}
