// Four players are playing a tournament of Chess with round robin method (each
// player will play with every other player). Each win has 2 points, draw has 1 point
// and loose has 0 points. Declare a score_board two dimensional array to store the
// scores of the players agains each player.
#include<stdio.h>

int score_board[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

// For que-4, define a function to update score_board after each match result.
// winner_player = 0 if its a draw
void update_score_board(int player_A, int player_B, int winner_player){
    if (winner_player == player_A)
        {
            player_A--;
            player_B--;
            score_board[player_A][player_B] += 2;
            score_board[player_B][player_A] += 0;
        }
        else if (winner_player == player_B)
        {
            player_A--;
            player_B--;
            score_board[player_A][player_B] += 1;
            score_board[player_B][player_A] += 2;
        }
        else if (winner_player == 0)
        {
            player_A--;
            player_B--;
            score_board[player_A][player_B] += 1;
            score_board[player_B][player_A] += 1;
        }
        else
        {
            printf("Invalid Entry, Please check the values\n");
        }
}

// For que-4, define a function to display score_board. 
void display_score_board(){
    printf("Player| 1  2  3  4\n");
    printf("------|-------------\n");
    for(int i=0; i<4; i++){
        printf("   %d  |", i+1);
        for(int j=0; j<4; j++){
            printf(i == j ? " - " : " %d ", score_board[i][j]);
        }
        printf("\n");
    }
}

// For que-4, define a function which returns the score of a specific player 
int player_result(int player){
    player--;
    int score = 0;
    for (int i = 0; i < 4; i++)
    {
        score += score_board[player][i];
    }
    return score;
}

// For que-4, define a function to find the winner of the tournament. 
void winner(int player_A, int player_B){
    player_A--;
    player_B--;
    if (score_board[player_A][player_B] > score_board[player_B][player_A])
    {
        printf("Winner is Player%d\n", player_A+1);
    }else if (score_board[player_A][player_B] < score_board[player_B][player_A]){
        printf("Winner is Player%d\n", player_B+1);
    }else{
        printf("Its a draw\n");
    }
}

// For que-4, define a function to display rank of the players.
void sort_decending(int array[2][4], int size){
    for (int i = 0; i < size; i++){
        int largest_value_index = i, temp, temp_index;
        for (int j = i; j < size; j++)
        {
            largest_value_index = array[1][largest_value_index] < array[1][j] ? j : largest_value_index;
        }
        if (i != largest_value_index)
        {
            temp = array[1][i];
            temp_index = array[0][i];
            array[1][i] = array[1][largest_value_index];
            array[1][largest_value_index] = temp;
            array[0][i] = array[0][largest_value_index];
            array[0][largest_value_index] = temp_index;
        } 
    }
}

void player_rank(){
    int scores[2][4], rank = 1;
    for (int i = 0; i < 4; i++)
    {
        scores[1][i] = player_result(i+1);
        scores[0][i] = i+1;
    }
    sort_decending(scores, 4);
    int temp = scores[1][0];
    for (int i = 0; i < 4; i++)
    {
        if (scores[1][i] != temp)
        {
            rank++;
            temp = scores[1][i];
        }
        printf("Rank %d: Player %d with score %d\n", rank, scores[0][i], scores[1][i]);
    } 
}

// For que-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.
void run_game(){
    for (int i = 1; i < 4; i++)
    {
        for (int j = i+1; j <= 4; j++)
        {
            int winner;
            printf("Winner for Player%d vs Player%d is: ", i, j);
            scanf("%d", &winner);
            update_score_board(i, j, winner);
        }
    }
    display_score_board();
}

int main(){
    run_game();
    player_rank();
    printf("\n");
    return 0;
}
