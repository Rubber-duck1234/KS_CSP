from flask import Flask, redirect, url_for, render_template

app = Flask(__name__)
admin = True

@app.route("/")
def home():
    return render_template("index.html", title="Home", content="This is the home page.")

@app.route("/test")
def testing():
    return render_template("index.html", title="Test", content="This is just checking to see if this works")

@app.route("/admin")
def administrator():
    if admin:
        return render_template("basic.html")
    else:
        return redirect(url_for("home"))


@app.route("/<name>")
def person(name):
    return f"<h1>Hello {name}!</h1>"


app.run()