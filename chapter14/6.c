#include <stdio.h>
#include <stdlib.h>
struct playerinfo {
	int player_id;
	char name[10];
	int play_times;
	int hit_times;
	int run_bar_times;
	int rbi;
};

int main(void)
{
	struct playerinfo player[4] = {
		{.play_times = 0, 0, 0, 0},
		{.play_times = 0, 0, 0, 0},
		{.play_times = 0, 0, 0, 0},
		{.play_times = 0, 0, 0, 0}
	};
	struct playerinfo temp;
	FILE * fp;
	double hit_ratio[4];
	if((fp = fopen("player.txt", "r")) == NULL)
	{
		fprintf(stderr, "Can't open the file.\n");
		exit(EXIT_FAILURE);
	}
	while(fscanf(fp, "%d%s%d%d%d%d", &temp.player_id, temp.name, &temp.play_times, &temp.hit_times, &temp.run_bar_times, &temp.rbi) != EOF)
	{
		if(player[temp.player_id].play_times == 0)
			player[temp.player_id] = temp;
		else
		{
			player[temp.player_id].play_times += temp.play_times;
			player[temp.player_id].hit_times += temp.hit_times;
			player[temp.player_id].run_bar_times += temp.run_bar_times;
			player[temp.player_id].rbi += temp.rbi;
		}
	}
	for(int i = 0; i < 4; i++)
	{
		hit_ratio[i] = (double)player[i].hit_times / player[i].play_times;
		printf("%d %s %2d %d %d %d %.2lf\n", player[i].player_id, player[i].name, player[i].play_times, player[i].hit_times, player[i].run_bar_times, player[i].rbi, hit_ratio[i]);
	}

	return 0;
}
