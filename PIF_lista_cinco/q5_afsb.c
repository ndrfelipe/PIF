#include <stdio.h>

// SUBMISSÃO # 44460193

typedef struct {
    int coordenada_x;
    int coordenada_y;
} PontoCartesiano;

int main() {
    int quantidade_de_testes;
    scanf("%d", &quantidade_de_testes);

    for (int i = 0; i < quantidade_de_testes; ++i) {
        PontoCartesiano vertice_a, vertice_b, vertice_c, vertice_d, ponto_robo;

        scanf("%d %d %d %d %d %d %d %d %d %d",
              &vertice_a.coordenada_x, &vertice_a.coordenada_y,
              &vertice_b.coordenada_x, &vertice_b.coordenada_y,
              &vertice_c.coordenada_x, &vertice_c.coordenada_y,
              &vertice_d.coordenada_x, &vertice_d.coordenada_y,
              &ponto_robo.coordenada_x, &ponto_robo.coordenada_y);

        int esta_dentro_do_retangulo =
            vertice_a.coordenada_x <= ponto_robo.coordenada_x &&
            vertice_d.coordenada_x <= ponto_robo.coordenada_x &&
            ponto_robo.coordenada_x <= vertice_b.coordenada_x &&
            ponto_robo.coordenada_x <= vertice_c.coordenada_x &&
            vertice_a.coordenada_y <= ponto_robo.coordenada_y &&
            vertice_b.coordenada_y <= ponto_robo.coordenada_y &&
            ponto_robo.coordenada_y <= vertice_c.coordenada_y &&
            ponto_robo.coordenada_y <= vertice_d.coordenada_y;

        printf("%d\n", esta_dentro_do_retangulo);
    }

    return 0;
}