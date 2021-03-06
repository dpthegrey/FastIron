# Generated by Django 3.0.3 on 2020-04-01 09:15

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('addresses', '0002_auto_20200321_0715'),
    ]

    operations = [
        migrations.AddField(
            model_name='address',
            name='name',
            field=models.CharField(blank=True, help_text='Shipping to? Who is it for?', max_length=120, null=True),
        ),
        migrations.AddField(
            model_name='address',
            name='nickname',
            field=models.CharField(blank=True, help_text='Internal Reference Nickname', max_length=120, null=True),
        ),
        migrations.AlterField(
            model_name='address',
            name='address_type',
            field=models.CharField(choices=[('billing', 'Billing address'), ('shipping', 'Shipping address')], max_length=120),
        ),
    ]
