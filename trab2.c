typedef struct veiculo {
	char numChassi[30],modelo[15],cor[10],placa[15],opcionais[30][6];
	int ano;
	float diaria;
} *veiculos;

typedef struct {
	int dia,mes,ano
}data;


typedef struct cliente{
	char cpf[20],nome[30],sexo;
	data datNascimento; 
	int chn;
}*clientes;

typedef struct locacao{
	veiculo veiLocad;
	clientes clienLocad;
	int locad;
}*locacaos;

int main(){
	
}
