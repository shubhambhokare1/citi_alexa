
var Client = require('node-rest-client').Client;

var client = new Client();

var args = {
data:{  "grant_type":"client_credentials","scope":"/api" },
headers:{ "Authorization":"Base64(9ce19bc8-abd2-4ba1-a441-a2443523861a:P4sC0lL6qR2hG2qI6dF0fN1aS2mX1rN0pC6oY8vN7cU2sX6gY2)","Content-Type":"application/x-www-form-urlencoded" }
};
// registering remote methods
client.registerMethod("jsonMethod", "https://sandbox.apihub.citi.com/gcb/api/clientCredentials/oauth2/token/us/gcb", "POST");

client.methods.jsonMethod(args, function (data, response) {
    // parsed response body as js object
    console.log(data);
    // raw response
    console.log(response);
});
