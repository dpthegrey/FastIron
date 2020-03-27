from django.shortcuts import render


import stripe
stripe.api_key = "sk_test_FQfSktUAeYgQ51Jqqc7VJ9sp00aUrZajyb"

STRIPE_PUB_KEY = 'pk_test_jbYKNdGc06kkYEd5eXIXeQdu00yxQPkVex'


def payment_method_view(request):
    if request.method == "POST":
        print(request.POST)
    return render(request, 'billing/payment-method.html', {"publish_key": STRIPE_PUB_KEY})
