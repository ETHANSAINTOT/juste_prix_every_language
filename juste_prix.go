// Go version

package main

import (
	"fmt"
	"math/rand"
	"strconv"
	"time"
)

func main() {
	rand.Seed(time.Now().UnixNano())
	randomPrice := rand.Intn(100) + 1
	fmt.Println(randomPrice)
	tentatives := 0
	fmt.Println("Devinez un nombre entre 1 et 100 !")
	for {
		tentatives++
		fmt.Printf("Tentative %d - Quel prix : ", tentatives)
		var userInput string
		fmt.Scanln(&userInput)
		userPrice, err := strconv.Atoi(userInput)
		if err != nil {
			fmt.Println("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)")
			continue
		}
		if userPrice == randomPrice {
			fmt.Printf("Bien joué ! Vous avez trouvé en %d tentative(s) !\n", tentatives)
			break
		} else if userPrice < randomPrice {
			fmt.Println("C'est plus")
		} else {
			fmt.Println("C'est moins")
		}
	}
}
