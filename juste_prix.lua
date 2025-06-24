function juste_prix()
    random_price = math.random(1, 100)
    print(random_price)

    while (1)
    do
        print("Quel prix")
        user_price_str = io.read()
        user_price = tonumber(user_price_str)

        if user_price == random_price then
            print("Bien joué")
            break
        elseif user_price < random_price then
            print("C'est plus")
        else
            print("C'est moins")
        end
    end
end

juste_prix()
