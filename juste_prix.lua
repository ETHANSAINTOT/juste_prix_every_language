-- Lua version améliorée

function juste_prix()
    math.randomseed(os.time())
    local random_price = math.random(1, 100)
    print(random_price)
    local tentatives = 0
    print("Devinez un nombre entre 1 et 100 !")
    while true do
        tentatives = tentatives + 1
        print("Tentative " .. tentatives .. " - Quel prix")
        local user_price_str = io.read()
        local user_price = tonumber(user_price_str)
        if user_price == nil then
            print("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)")
        elseif user_price == random_price then
            print("Bien joué ! Vous avez trouvé en " .. tentatives .. " tentative(s) !")
            break
        elseif user_price < random_price then
            print("C'est plus")
        else
            print("C'est moins")
        end
    end
end
juste_prix()